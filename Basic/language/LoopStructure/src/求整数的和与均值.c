#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    float average;

    scanf("%d", &n);

    int *p = (int*)malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        sum += p[i];

    }

    average = 1.0 * sum / n;

    printf("%d %.5f", sum, average);

    free(p);
    return 0;
}