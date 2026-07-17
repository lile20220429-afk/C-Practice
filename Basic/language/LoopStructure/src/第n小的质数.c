#include <stdio.h>

int main()
{
    int n, position = 1;
    scanf("%d", &n);

    for(int i = 2; ; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0) break;
            if(j == i - 1) position++;
        }

        if(position == n) 
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}