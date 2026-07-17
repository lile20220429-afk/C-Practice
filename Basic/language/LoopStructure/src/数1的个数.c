#include <stdio.h>

int main()
{
    int n;
    int a, b, c, d, e;
    int num = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        a = i / 10000;
        b = i / 1000 % 10;
        c = i / 100 % 10;
        d = i / 10 % 10;
        e = i % 10;
        
        num += a == 1 ? 1 : 0;
        num += b == 1 ? 1 : 0;
        num += c == 1 ? 1 : 0;
        num += d == 1 ? 1 : 0;
        num += e == 1 ? 1 : 0;

    }

    printf("%d", num);
    return 0;
}