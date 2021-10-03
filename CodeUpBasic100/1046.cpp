#include <stdio.h>

int main()
{
	long int nA, nB, nC;

	scanf_s("%ld %ld %ld", &nA, &nB, &nC);

	printf("%ld\n", nA + nB + nC);
	printf("%.1lf", ((double)nA + (double)nB + (double)nC) / 3);

	return 0;
}