#include <stdio.h>

int main()
{
    long a,b,c;

    scanf("%ld %ld %ld", &a, &b, &c);

    for(int i = 1; i < c; i++)
    {
        a *= b; 
    }

    printf("%ld", a);

    return 0;
}