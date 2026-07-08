#include <stdio.h>

int main()
{
    int road;
    scanf("%d", &road);
    float t1, t2;
    t1 = 27 + 23 + road / 3.0;
    t2 = road / 1.2;
    if(t1 < t2)
    {
        printf("Bike");
    }
    else if(t1 > t2)
    {
        printf("Walk");
    }
    else printf("All");
    return 0;
}