#include <stdio.h>

int main()
{
    int n, S = 0, temp = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            temp *= j;
        }
        S += temp;
        temp = 1;
    }

    printf("%d", S);
    return 0;
}