#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int sbp;
    int dbp;
} Pressure;

int main()
{
    int n, current = 0, max = 0;
    scanf("%d", &n);

    Pressure *p = (Pressure*)malloc(sizeof(Pressure) * n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &p[i].sbp, &p[i].dbp);

        if(p[i].sbp >= 90 && p[i].sbp <= 140 && p[i].dbp >= 60 && p[i].dbp <= 90)
        {
            current++;

            if(current > max) max = current;
        }
        else current = 0;
    }

    printf("%d", max);

    free(p);
    return 0;
}