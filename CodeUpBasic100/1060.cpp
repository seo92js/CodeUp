#include <stdio.h>

int main()
{
	int nA, nB;

	scanf_s("%d %d", &nA, &nB);

	printf("%d", nA & nB);

	return 0;
}