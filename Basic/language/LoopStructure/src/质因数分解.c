#include <stdio.h>
#include <math.h>

int main()
{
    long n;
    scanf("%ld", &n);

    for(long i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d", n / i);
            break;
        }
    }
    return 0;
}