#include <stdio.h>

int main()
{
    long n, result = 0, t = 1;
    scanf("%ld", &n);

    if(n >= 25) n = 24; 

    for(int i = 1; i <= n; i++)
    {
        t = 1;

        for(int j = 1; j <= i; j++)
        {
            t *= j;
            t %= 1000000;
        }

        result += t;
        result %= 1000000;
    }
    
    printf("%ld", result);
    return 0;
}