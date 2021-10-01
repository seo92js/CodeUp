#include <stdio.h>

int main()
{
	int nNum1, nNum2;

	scanf_s("%d.%d", &nNum1, &nNum2);

	printf("%d\n", nNum1);
	printf("%06d", nNum2);

	return 0;
}