#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    int k = 1;
    float r;
    while(1)
    {
        r = a - k * b;
        if(r < 0)
        {
            r = a - b * (k - 1);
            break;
        }
        k++;
    }
    printf("%g", r);
    return 0;
}