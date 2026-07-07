#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, score;
    scanf("%d %d %d", &A, &B, &C);
    score = A * 0.2 + B * 0.3 + C * 0.5;
    printf("%d", score);
    return 0;
}