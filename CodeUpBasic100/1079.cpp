#include <stdio.h>

int main()
{
    char c = 0;

    while(c != 'q')
    {
        scanf("%c", &c);
        printf("%c", c);
    }

    return 0;
}