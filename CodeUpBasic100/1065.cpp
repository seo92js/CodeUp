#include <stdio.h>

int main()
{
	int nA, nB, nC;

	scanf_s("%d %d %d", &nA, &nB, &nC);

	if (nA % 2 == 0)
		printf("%d\n", nA);
	if(nB % 2 == 0)
		printf("%d\n", nB);
	if(nC % 2 == 0)
		printf("%d\n", nC);

	return 0;
}