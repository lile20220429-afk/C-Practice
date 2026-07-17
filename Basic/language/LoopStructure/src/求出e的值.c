#include <stdio.h>

int main()
{
    int n, temp;
    double e = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        temp = 1;

        for(int j = 1; j <= i; j++)
        {
            temp *= j;
        }

        e += 1.0 / temp;
    }

    printf("%.10lf", e);
    return 0;
}