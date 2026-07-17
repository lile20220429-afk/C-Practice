#include <stdio.h>

int main()
{
    long long N;
    long long n = 0;
    int sign = 1;
    scanf("%lld", &N);

    if(N < 0)
    {
        sign = -1;
        N = -N;
    }

    while(N != 0)
    {
        n = n * 10 + N % 10;
        N /= 10;
    }

    n = n * sign;
    printf("%lld", n);
    
    return 0;
}