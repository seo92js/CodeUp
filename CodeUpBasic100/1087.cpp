#include <stdio.h>

int main()
{
    int n = 0, sum = 0, limit;

    scanf("%d", &limit);

    while(sum < limit)
    {
        n++;
        sum += n;
    }

    printf("%d", sum);

    return 0;
}