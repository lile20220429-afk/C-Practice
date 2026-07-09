#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, max = 0;
    scanf("%d", &n);
    int *p = (int*)malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        max = max > p[i] ? max : p[i];
    }

    printf("%d", max);

    free(p);
    return 0;
}