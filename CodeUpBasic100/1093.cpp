#include <stdio.h>

int main()
{
    int student[23] = {}, count, num;

    scanf("%d", &count);

    for(int i = 0; i < count; i++)
    {
        scanf("%d", &num);
        student[num-1]++;
    }

    for(int i = 0; i < 23; i++)
    {
        printf("%d ", student[i]);
    }

    return 0;
}