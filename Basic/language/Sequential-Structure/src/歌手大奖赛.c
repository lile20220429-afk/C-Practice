#include <stdio.h>

int main()
{
    float max, min, score;
    max = 9.6 * 6 - 9.4 * 5;
    min = 9.6 * 6 - 9.8 * 5;
    score = (9.6 * 6 - max - min) / 4;
    printf("%5.2f", score);

    return 0;
}