#include "header.h"




void clrscr()
{
    system("clear");
    //system("@cls||clear");
    //printf("\e[1;1H\e[2J");
}

void out_surface()
{
    clrscr();
    clrscr();


    printf("\n               ");

    for(int line = 3; line < max_line; line++)
    {
        printf("\n                ");

        for(int col = 0; col < max_col; col++)
        {
            if(Surface.surface[line][col] != 0)
                printf("* ");
            else
                printf("  ");
        }
    }
    printf("\n               ");
}






void fall_singles()
{
    for(int line = max_line - 2; line >= 0; line--)
        for(int col = 1; col < max_col - 1; col++)
        {
            if(Surface.surface[line][col] == 0 && Surface.surface[line - 1][col] == 1)
            {
                Surface.surface[line][col] = 1;
                Surface.surface[line - 1][col] = 0;
            }
        }
}




void delete_line(int line)
{
    for(int col = 1; col < max_col - 1; col++)
        Surface.surface[line][col] = 0;
}


int rules_game()
{

    for(int col = 1; col < max_col - 2; col++)
    {
        if(Surface.surface[3][col] == 1)
            return 1;
    }


    for(int line = max_line - 2; line >= 0; line--)
        for(int col = 1; col < max_col - 1 && Surface.surface[line][col] == 1; col++)
        {
            if(col == max_col - 2)
            {
                delete_line(line);
                fall_singles();
            }

        }
    return 0;
}

