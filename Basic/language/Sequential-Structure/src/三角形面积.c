#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, area;
    scanf("%f %f %f", &a, &b, &c);
    float p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.3f", area);
    return 0;
}