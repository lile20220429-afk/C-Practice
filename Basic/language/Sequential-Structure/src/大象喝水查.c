#include <stdio.h>

#define pi 3.14

int main()
{
    int h, r, n;
    scanf("%d %d", &h, &r);
    n = (int)20 * 1000 / (h * pi * r * r);
    printf("%d", n + 1);
    return 0;
}