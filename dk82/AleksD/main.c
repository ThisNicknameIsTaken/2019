
#include <stdio.h>
#include <string.h>
#include "dk_tools.h"
int Q(int C, char* F, int D);
int main(int argc, const char* argv[]) {
	float C;
	int D;
	char F[100];
	printf_s("enter F:");
	gets(F);
	printf_s("\nEnter C:");
	scanf_s("%f", &C);
	printf_s("\nEnter D:");
	scanf_s("%i", &D);
	
	printf_s("\nQ = %i", Q(C , F , D));
	
	return 0;
}
	int Q(int C , char* F ,  int D)
	{
	int Dex = returnDex_minus_C(F,C);
	int Finish = summ(D, Dex);
	return Finish;
	}

