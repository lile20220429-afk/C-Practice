#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, num1 = 0, num5 = 0, num10 = 0;
    scanf("%d", &k);

    int *p = (int*)malloc(sizeof(int) * k);
    for(int i = 0; i < k; i++)
    {
        scanf("%d", &p[i]);
        if(p[i] == 1) num1 += 1;
        if(p[i] == 5) num5 += 1;
        if(p[i] == 10) num10 += 1;
    }

    printf("%d\n%d\n%d", num1, num5, num10);

    free(p);
    return 0;
}