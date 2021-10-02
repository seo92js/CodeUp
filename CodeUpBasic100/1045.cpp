#include <stdio.h>

int main()
{
	long int nA, nB;

	scanf_s("%ld %ld", &nA, &nB);

	printf("%ld\n", nA + nB);
	printf("%ld\n", nA - nB);
	printf("%ld\n", nA * nB);
	printf("%ld\n", (int)(nA / nB));
	printf("%ld\n", nA % nB);
	printf("%.2lf", (double)nA / (double)nB);

	return 0;
}