#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float sum = 0, avarage;

    scanf("%d", &n);
    float *p = (float*)malloc(sizeof(float) * n);

    for(int i = 0; i < n; i++)
    {
        scanf("%f", &p[i]);
        sum += p[i];
    }

    avarage = sum / n;

    printf("%.4f", avarage);
    
    free(p);
    return 0;
}