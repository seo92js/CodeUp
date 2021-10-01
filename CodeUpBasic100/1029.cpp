#include <stdio.h>

int main()
{
	double d;

	scanf_s("%lf", &d);
	printf("%.11lf", d);

	return 0;
}