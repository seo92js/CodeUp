#include <stdio.h>

int main()
{
	int nYear, nMonth, nDay;

	scanf_s("%04d.%02d.%02d", &nYear, &nMonth, &nDay);
	printf("%02d-%02d-%04d", nDay, nMonth, nYear);

	return 0;
}