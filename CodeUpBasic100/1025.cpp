#include <stdio.h>

int main()
{
	int nA, nB, nC, nD, nE;

	scanf_s("%1d%1d%1d%1d%1d", &nA, &nB , &nC, &nD, &nE);

	printf("[%d]\n", nA * 10000);
	printf("[%d]\n", nB * 1000);
	printf("[%d]\n", nC * 100);
	printf("[%d]\n", nD * 10);
	printf("[%d]\n", nE);
	
	return 0;
}