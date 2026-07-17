#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int temp = 1992;

    if(n == 1) temp %= 100;
    

    for(int i = 0; i < n - 1; i++)
    {
        temp = temp * 1992 % 100;
    }



    printf("%d", temp);
    return 0;
}