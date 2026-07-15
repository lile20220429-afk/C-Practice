#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int value = a;

    for(int i = 1; i < b; i++)
    {
        value = value * a % 1000;
    }

    printf("%03d", value);
    return 0;
}