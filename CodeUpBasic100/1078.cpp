#include <stdio.h>

int main()
{
    int n,nSum = 0;
    scanf("%d", &n);

    for(int i = 0; i < n+1; i++)
    {
        if(i%2 == 0)
            nSum+=i;
    }

    printf("%d", nSum);

    return 0;
}