#include <stdio.h>

int main()
{
    int a,b,c, value;

    scanf("%d %d %d", &a, &b, &c);

    for(int i = 1; i < c; i++)
    {
        value = a + (b * i);
    }

    printf("%d", value);

    return 0;
}