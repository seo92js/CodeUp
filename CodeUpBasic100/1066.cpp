#include <stdio.h>

int main()
{
	int nA, nB, nC;

	scanf_s("%d %d %d", &nA, &nB, &nC);

	if (nA % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");

	if (nB % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");

	if (nC % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");;

	return 0;
}