#include <stdio.h>

int main()
{
    int m, s = 0;
    scanf("%d", &m);

    for(int i = 1; ; i++)
    {
        s += i;

        if(s > m) 
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}