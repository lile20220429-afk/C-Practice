#include <stdio.h>

int main()
{
    int h;
    double s = 0, y;
    scanf("%d", &h);

    y = (double)h;
    s = y;

    for(int i = 0; i < 9; i++)
    {
        y /= 2;
        s += y * 2;
    }
    y /= 2;

    printf("%g\n%g", s, y);

    return 0;
}