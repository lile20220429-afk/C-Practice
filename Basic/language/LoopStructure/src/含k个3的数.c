#include <stdio.h>

int main()
{
    int m, k;
    int num = 0;
    scanf("%d %d", &m, &k);

    if(m % 19 != 0) 
    {
        printf("NO");
        return 1;
    }

    while(m != 0)
    {
        if(m % 10 == 3) num++;
        m /= 10;
    }

    if(num == k)
    {
        printf("YES");
    }
    else printf("NO");
    
    return 0;
}