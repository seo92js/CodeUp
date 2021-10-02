#include <stdio.h>

int main()
{
	long int n;

	scanf_s("%ld", &n);
	printf("%ld", ++n);

	return 0;
}