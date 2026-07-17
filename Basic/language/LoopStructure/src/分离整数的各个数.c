#include <stdio.h>

int main()
{
    long n;
    int num;
    scanf("%ld", &n);

    while(n / 10 != 0)
    {
        num = n % 10;
        printf("%d ", num);
        n /= 10;
    }

    printf("%ld", n);
    return 0;
}