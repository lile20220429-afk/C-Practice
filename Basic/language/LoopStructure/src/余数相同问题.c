#include <stdio.h>

int main()
{
    long a, b, c;
    int x;

    scanf("%ld %ld %ld", &a, &b, &c);

    for(int i = 2; ; i++)
    {
        if(a % i == b % i && a % i == c % i)
        {
            x = i;
            break;
        }
    }

    printf("%d", x);

    return 0;
}