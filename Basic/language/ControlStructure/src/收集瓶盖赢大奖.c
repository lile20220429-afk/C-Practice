#include <stdio.h>

int main()
{
    int fortune, engagement;
    scanf("%d %d", &fortune, &engagement);
    if(fortune >= 10 || engagement >= 20) printf("1");
    else printf("0");
    return 0;
}