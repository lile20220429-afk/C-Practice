#include <stdio.h>

int main()
{
    double x;
    long n;
    double sum = 1, temp = 1;

    scanf("%lf %ld", &x, &n);

    for(int i = 1; i <= n; i++)
    {
        temp *= x;
        sum += temp;
    }

    printf("%.2lf", sum);
    return 0;
}