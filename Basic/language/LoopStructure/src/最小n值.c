#include <stdio.h>

int main()
{
    int m;
    float value = 0;
    scanf("%d", &m);

    for(int i = 1; ; i++)
    {
        value += 1.0 / i;

        if(value >= m)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}