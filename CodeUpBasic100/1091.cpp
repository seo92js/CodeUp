#include <stdio.h>

int main()
{
    long a,b,c,d;

    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);

    for(int i = 1; i < d; i++)
    {
        a = a * b + c;
    }

    printf("%ld", a);

    return 0;
}