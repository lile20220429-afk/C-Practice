#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%.4f", (x * 87 + y * 85.0) / (x + y));
    return 0;
}