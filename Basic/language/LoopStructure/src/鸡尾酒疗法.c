#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int all;
    int valid;
} Data;

int main()
{
    int n;
    scanf("%d", &n);

    Data *p = (Data*)malloc(sizeof(Data) * n);

    scanf("%d %d", &p[0].all, &p[0].valid);
    float x = p[0].valid *100.0 / p[0].all;

    for(int i = 1; i < n; i++)
    {
        scanf("%d %d", &p[i].all, &p[i].valid);
        
    }

    for(int i = 1; i < n; i++)
    {
       int y = p[i].valid *100.0 / p[i].all;

        if(y - x > 5) printf("better\n");
        else if(x - y > 5) printf("worse\n");
        else printf("same\n");
        
    }



    free(p);
    return 0;
}