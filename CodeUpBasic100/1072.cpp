#include <stdio.h>

int main()
{
	int nCount, nInput;

	scanf_s("%d", &nCount);

forward:
	scanf_s("%d", &nInput);
	printf("%d\n", nInput);
	if (--nCount != 0)
		goto forward;
	
	return 0;
}