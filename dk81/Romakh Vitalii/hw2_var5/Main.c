#include <stdio.h>
#include "Figure.h"


int main(int argc, char * argv[]) {
	//I want to print my Trapezium, and currently code is under construction;

	Trapezium *trapArray[10];
	Trapezium *singleTrap = createTrapezium(); 

	showTrapezium(singleTrap);

	for (int i = 0; i < 10; i++)
	{
		trapArray[i] = generateTrapezium(20);
		showTrapezium(trapArray[i]);
	}


	for (int i = 0; i < 10; i++)
	{
		deleteTrapezium(trapArray[i]);
	}

	system("pause");
	return 0;
}
