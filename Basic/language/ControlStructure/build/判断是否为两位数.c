#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a / 10 != 0 && a / 10 / 10 == 0)
    {
        printf("1");
    }
    else printf("0");
    return 0;
}