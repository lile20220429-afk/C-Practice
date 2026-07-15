#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, value, num = 0;
    scanf("%d", &n);

    int *p = (int*)malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);

        value = p[i] % 10 - p[i] / 1000 - p[i] / 100 % 10 - p[i] / 10 % 10;
        if(value > 0) num++;
    }

    printf("%d", num);


    free(p);
    return 0;
}