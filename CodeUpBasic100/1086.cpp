#include <stdio.h>

int main()
{
    long width, height, bit;
    double size;

    scanf("%ld %ld %ld", &width, &height, &bit);

    size = (double)(width * height * bit) / 8 / 1024/ 1024;

    printf("%.2lf MB", size);

    return 0;
}