#include <stdio.h>

int main()
{
	int nHour, nMin, nSec;

	scanf_s("%d:%d:%d", &nHour, &nMin, &nSec);
	printf("%d", nMin);

	return 0;
}