#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, n;
    double rate, population;

    scanf("%d %d", &x, &n);
    rate = 1 + 0.1 / 100;
    population = x;

    for(int i = 0; i < n; i++)
    {
        population *= rate;
    }

    printf("%.4lf", population);

    return 0;
}