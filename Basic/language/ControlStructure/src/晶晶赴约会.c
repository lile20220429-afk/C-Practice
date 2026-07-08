#include <stdio.h>

int main()
{
    int weekday;
    scanf("%d", &weekday);
    switch(weekday)
    {
        case 1: 
        case 3:
        case 5: printf("NO"); break;
        case 2:
        case 4:
        case 6:
        case 7: printf("YES"); break;
    }
    return 0;
}