#include <stdio.h>

int main()
{
    int nInput, nSum = 0, nNum = 0;

    scanf("%d", &nInput);

    while(nSum < nInput)
    {
        nNum++;
        nSum += nNum;
    }

    printf("%d", nNum);

    return 0;
}