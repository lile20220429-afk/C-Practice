#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, num = 0;
    scanf("%d\n%d", &m, &n);

    int *p = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);

        if(m < p[i])
        {
            num += 1;
        }
        else
        {
            m -= p[i];
        }
    }

    printf("%d", num);
    return 0;
}