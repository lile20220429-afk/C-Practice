#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, r;
    scanf("%f %f", &a, &b);
    a = 1 / a;
    b = 1 / b;
    r = 1 / (a + b);
    printf("%.2f", r);
    return 0;
}