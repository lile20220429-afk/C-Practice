#include <stdio.h>

int main()
{
    int n;
    double e = 1, temp = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        temp /= i;
        e += temp;
    }

    printf("%.10lf", e);
    return 0;
}