#include <stdio.h>

int main()
{
    int nR, nG, nB, nCount = 0;

    scanf("%d %d %d", &nR, &nG, &nB);

    for(int i = 0; i < nR; i++)
    {
        for(int j = 0; j < nG; j++)
        {
            for(int k = 0; k < nB; k++)
            {
                printf("%d %d %d\n", i, j, k);
                nCount++;
            }
        }
    }

    printf("%d", nCount);

    return 0;
}