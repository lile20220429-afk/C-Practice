#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    scanf("%d", &k);

    int *p = (int*)malloc(sizeof(int) * k);

    p[0] = 1;
    p[1] = 1;

    for(int i = 2; i < k; i++)
    {
        p[i] = p[i - 1] + p[i - 2];
    }

    printf("%d", p[k - 1]);

    free(p);
    return 0;
}