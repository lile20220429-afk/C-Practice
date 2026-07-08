#include <stdio.h>

int main()
{
    int Chinese, math;
    scanf("%d %d", &Chinese, &math);
    if(Chinese < 60 && math < 60) printf("0");
    else if(Chinese < 60 || math < 60) printf("1");
    else printf("0");
    return 0;
}