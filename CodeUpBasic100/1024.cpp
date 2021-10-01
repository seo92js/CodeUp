#include <stdio.h>

int main()
{
	char cInput[30] = "";

	scanf_s("%s", cInput);

	for (int i = 0; i < 30; i++)
	{
		if (cInput[i] != NULL)
			printf("\'%c\'\n", cInput[i]);
	}

	return 0;
}