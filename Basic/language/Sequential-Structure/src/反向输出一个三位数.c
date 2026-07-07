#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    a = a % 10 * 100 + a / 10 % 10 * 10 + a / 10 / 10;
    printf("%03d", a);
    return 0;
}