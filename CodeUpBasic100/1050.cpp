#include <stdio.h>

int main()
{
	int nA, nB;

	scanf_s("%d %d", &nA, &nB);

	if (nA == nB)
		printf("1");
	else
		printf("0");

	return 0;
}