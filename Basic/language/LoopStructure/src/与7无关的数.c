#include <stdio.h>

int main()
{
    int n;
    int a, b;
    int sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        a = i / 10;
        b = i % 10;

        if(i % 7 != 0 && a != 7 && b != 7)
        {
            sum += i * i;
        }
    }

    printf("%d", sum);
    return 0;
}