#include <stdio.h>

#define pi 3.14

int main()
{
    double r, V;
    scanf("%lf", &r);
    V = 4 / 3.0 * pi * r * r * r;
    printf("%.2lf", V);
    return 0;
}