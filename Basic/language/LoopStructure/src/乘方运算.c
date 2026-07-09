#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, n;
    long long product = 1;
    scanf("%d %d", &a, &n);
    for(int i = 0; i < n; i++)
    {
        product *= a;
    }

    printf("%lld", product);
    return 0;
}