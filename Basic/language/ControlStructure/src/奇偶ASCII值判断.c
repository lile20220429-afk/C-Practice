#include <stdio.h>

int main()
{
    char character;
    scanf("%c",&character);
    int num = (int)character;
    if(num % 2 == 0)
    {
        printf("NO");
    }
    else printf("YES");
    return 0;
}