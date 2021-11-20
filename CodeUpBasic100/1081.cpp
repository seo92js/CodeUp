#include <stdio.h>

int main()
{
    int nA, nB;

    scanf("%d %d", &nA, &nB);

    for(int i = 1; i <= nA; i++)
    {
        for(int j = 1; j <= nB; j++)
        {
            printf("%d %d\n", i,j);
        }
    }

    return 0;
}