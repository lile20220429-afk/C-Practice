#include <stdio.h>

int main()
{
    int n;
    long long product = 1;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        product *= i;
    }

    printf("%lld", product);
    return 0;
}