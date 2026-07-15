#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
    int num;
} px;

int main()
{
    int n;
    float r;
    float t = 0;
    scanf("%d", &n);

    px *p = (px*)malloc(sizeof(px) * n);
    for(int i = 0; i < n; i++)
    {
        scanf("%f %f %d", &p[i].x, &p[i].y, &p[i].num);

        r = sqrt(p[i].x * p[i].x + p[i].y * p[i].y);
        t += r / 50 * 2 + p[i].num + 0.5 * p[i].num;
    }

    int result = (int)ceil(t);
    printf("%d", result);

    free(p);
    return 0;
}