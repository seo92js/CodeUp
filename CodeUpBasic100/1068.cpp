#include <stdio.h>

int main()
{
	int nScore;

	scanf_s("%d", &nScore);

	if (90 <= nScore && nScore <= 100)
		printf("A");
	else if (70 <= nScore && nScore <= 89)
		printf("B");
	else if (40 <= nScore && nScore <= 69)
		printf("C");
	else
		printf("D");

	return 0;
}