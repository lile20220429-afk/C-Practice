#include <stdio.h>

int main()
{
    int n;
    int a = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        a *= 2;
    }
    printf("%d", a);
    return 0;
}