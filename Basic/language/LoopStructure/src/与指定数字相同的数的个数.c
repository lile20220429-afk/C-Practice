#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, n, num = 0;
    scanf("%d %d", &N, &n);

    int *p = (int*)malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &p[i]);
        if(p[i] == n) num += 1;
    }

    printf("%d", num);

    free(p);
    return 0;
}