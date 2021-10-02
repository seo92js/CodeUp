#include <stdio.h>

int main()
{
	long int a, b;

	scanf_s("%ld %ld", &a, &b);
	printf("%ld", a + b);

	return 0;
}