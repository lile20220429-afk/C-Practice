#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, n, value;

    scanf("%d %d %d", &a, &b, &n);

    value = a % b;

    for(int i = 1; i < n; i++)
    {
        value = value * 10 % b;
    }

    value = value * 10 / b;
    
    printf("%d", value);
    return 0;
}