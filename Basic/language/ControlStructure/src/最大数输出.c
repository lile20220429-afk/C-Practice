#include <stdio.h>

int main()
{
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    temp = a > b ? a : b;
    temp = temp > c ? temp : c;
    printf("%d", temp);
    return 0;
}