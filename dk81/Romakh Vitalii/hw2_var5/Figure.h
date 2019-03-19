#include <stdio.h>
#include <Math.h>
#include <math.h>

#define ERROR -4364368

typedef struct tagDot {
	int x;
	int y;
	char id;
}Dot;

typedef struct tagTrapezium {
	Dot *leftBottomCorner;
	Dot *leftTopCorner;
	Dot *rightTopCorner;
	Dot *rightBottomCorner;
	float square;
}Trapezium;

Dot *createDot(int x, int y);
Dot *generateDot(int x, int y, char id);

Trapezium *createTrapezium();
Trapezium *generateTrapezium(int radius);
void deleteDot(Dot *dot);
void deleteTrapezium(Trapezium *figure);
void showTrapezium(Trapezium *figure);
void showDot(Dot *d);
void printTrapezium(Trapezium *trap);

Dot* findLeftDot(Trapezium *trap);
Dot* findRightDot(Trapezium *trap);
Dot* findTopDot(Trapezium *trap);
Dot* findBottomDot(Trapezium *trap);

float calculateTrapeziumSquare(Trapezium *trap);

int compareDot(Dot *a, int x, int y, int offsetX, int offsetY, int currentId);

float calculateLineLength(Dot *a, Dot *b);
