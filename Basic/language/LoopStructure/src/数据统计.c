#include <stdio.h>

int main()
{
    int num, min, max, sum = 0, n = 0;
    float average;

    while(scanf("%d", &num) == 1)
    {
        n++;
        sum += num;

        if(n == 1) 
        {
            min = num;
            max = num;
        }
        else
        {
            min = min < num ? min : num;
            max = max > num ? max : num;
        }
        

    }

    average = sum * 1.0 / n;

    printf("%d %d %.3f", min, max, average);
    return 0;
}