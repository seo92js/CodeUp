#include <stdio.h>

int main()
{
    long h, b, c, s;
    double value;

    scanf("%ld %ld %ld %ld", &h, &b, &c, &s);

    value = (double)(h * b * c * s) / 8 / 1024/ 1024;

    printf("%.1lf MB", value);

    return 0;

    //1바이트 = 8비트
    //1키키로바이느 = 1024 바이트
    //1메가바이트 = 1024키로바이트
    //1024메가바이트 = 1기가바이트
}