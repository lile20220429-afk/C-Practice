#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int gold;
    int silver;
    int copper;
} Medal;

int main()
{
    int n, gold = 0, silver = 0, copper = 0, medal;

    scanf("%d", &n);
    Medal *p = (Medal*)malloc(sizeof(Medal) * n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &p[i].gold, &p[i].silver, &p[i].copper);

        gold += p[i].gold;
        silver += p[i].silver;
        copper += p[i].copper;
    }

    medal = gold + silver + copper;

    printf("%d %d %d %d", gold, silver, copper, medal);

    free(p);
    return 0;
}