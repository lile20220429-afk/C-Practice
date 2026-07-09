#include <stdio.h>

int main()
{
    float N, y;
    scanf("%f", &N);
    if(N >= 0 && N < 5)
    {
        y = -N + 2.5;
    }
    else if(N < 10)
    {
        y = 2 - 1.5 * (N - 3) * (N - 3);
    }
    else if(N < 20)
    {
        y = N / 2 - 1.5;
    }
    printf("%.3f", y);
    return 0;

}