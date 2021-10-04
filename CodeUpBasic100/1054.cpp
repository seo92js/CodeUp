#include <stdio.h>

int main()
{
	int nA, nB;

	scanf_s("%d %d", &nA, &nB);

	if (nA == 1 && nB == 1)
		printf("1");
	else
		printf("0");

	return 0;
}