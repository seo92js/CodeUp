#include <stdio.h>

int main()
{
	int nNum1, nNum2;

	scanf_s("%d-%d", &nNum1, &nNum2);
	printf("%06d%07d", nNum1, nNum2);

	return 0;
}