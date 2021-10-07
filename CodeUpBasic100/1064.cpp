#include <stdio.h>

int main()
{
	int nA, nB, nC;

	scanf_s("%d %d %d", &nA, &nB, &nC);

	printf("%d", (nA < nB ? nA : nB) < nC ? (nA < nB ? nA : nB) : nC);

	return 0;
}


