#include <stdio.h>

int main()
{
    int a,b[10000] = {}, num, min = 10000;

    scanf("%d", &a);

    for(int i = 0; i<a; i++)
    {
        scanf("%d", &num);
        b[num-1]++;

        if(min > num)
            min = num;
    }

    printf("%d", min);

    return 0;
}