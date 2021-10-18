#include <stdio.h>

int main()
{
	bool bWhile = true;
	int n;

	while (bWhile)
	{
		scanf_s("%d", &n);

		if (n != 0)
			printf("%d\n", n);
		else
			bWhile = false;
	}

	return 0;
}