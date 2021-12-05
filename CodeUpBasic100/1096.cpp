#include <stdio.h>

int main()
{
    int count, point[19][19] = {}, x, y;

    scanf("%d", &count);

    for(int i = 0; i < count; i++)
    {
        scanf("%d %d", &x, &y);
        point[x-1][y-1] = 1;
    }

    for(int i = 0; i < 19; i++)
    {
        for(int j = 0; j < 19; j++)
        {
            printf("%d ", point[i][j]);
        }
        printf("\n");
    }
}