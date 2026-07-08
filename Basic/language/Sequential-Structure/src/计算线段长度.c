#include <stdio.h>
#include <math.h>

int main()
{
    double Xa, Ya, Xb, Yb;
    scanf("%lf %lf\n%lf %lf", &Xa, &Ya, &Xb, &Yb);
    float r;
    r = sqrt((Xa - Xb) * (Xa - Xb) + (Ya - Yb) * (Ya - Yb));
    printf("%.3f", r);
    return 0;
}