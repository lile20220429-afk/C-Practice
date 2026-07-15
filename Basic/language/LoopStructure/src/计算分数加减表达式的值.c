#include <stdio.h>

int main()
{
    int n;
    float value = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) value += 1.0 / (i + 1);
        if(i % 2 != 0) value -= 1.0 / (i + 1);
    }

    printf("%.4f", value);
    
    return 0;
}