#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float value = 0;
    scanf("%d", &n);
    int *p = (int*)malloc(sizeof(int) * n);
    int *q = (int*)malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            p[0] = 1;
            q[0] = 2;
        }
        else
        {
            q[i] = q[i - 1] + p[i - 1];
            p[i] = q[i - 1];
        }
        value += q[i] * 1.0 / p[i];
    }

    printf("%.4f", value);

    free(p);
    free(q);
    return 0;
}