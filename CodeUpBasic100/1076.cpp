#include <stdio.h>

int main()
{
    char cA = 'a';
    char cB;

    scanf("%c", &cB);

    do
    {
        printf("%c ", cA);
        cA++;
    } while(cA < cB + 1);
    
    return 0;
}