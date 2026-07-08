#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if(N > 0) printf("positive");
    if(N == 0) printf("zero");
    if(N < 0) printf("negative");
    return 0;
}