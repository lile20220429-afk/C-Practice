#include <stdio.h>

int main()
{
    int n, position = 0;
    scanf("%d", &n);

    for(int i = 2; ; i++)
    {
        int isprime = 1;
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime)
        {
            position++;
        }

        if(position == n) 
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}