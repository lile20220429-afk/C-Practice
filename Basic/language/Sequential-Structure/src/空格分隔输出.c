#include <stdio.h>

int main()
{
    char c;
    int i;
    float f;
    double d;

    scanf("%c\n%d\n%f\n%lf",&c, &i, &f, &d);
    printf("%c %d %f %lf", c, i, f, d);
    return 0;
}