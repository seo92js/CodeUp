#include <stdio.h>

int main()
{
	int nYear, nMonth, nDay;

	scanf_s("%d.%d.%d", &nYear, &nMonth, &nDay);
	printf("%04d.%02d.%02d", nYear, nMonth, nDay);

	return 0;
}