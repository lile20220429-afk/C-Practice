#include <stdio.h>

int main()
{
    int A, B, C, sum;
    for(int i = 100; i <= 999; i++)
    {
        A = i / 100;
        B = i / 10 % 10;
        C = i % 10;

        sum = A * A * A + B * B * B + C * C * C;

        if(sum == i) printf("%d\n", i);
    }
    return 0;
}