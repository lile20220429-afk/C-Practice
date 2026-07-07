#include <stdio.h>

int main()
{
    int candy[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%d ", &candy[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        candy[i] /= 3;
        candy[(i + 1) % 5] += candy[i];
        candy[(i + 4) % 5] += candy[i];
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%5d", candy[i]);
    }
    return 0;
}