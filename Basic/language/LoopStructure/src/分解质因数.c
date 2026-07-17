#include <stdio.h>

int main()
{
    int n, num = 0;
    scanf("%d", &n);
    int temp = n;

    printf("%d=", n);

    for(int i = 2; i <= n; i++)
    {
        while(temp % i == 0)
        {
            if(num == 0) printf("%d", i);
            if(num != 0) printf("*%d", i);

            temp /= i;
            num = 1;
        }
    }

    if(n == 2) printf("2");
    return 0;
}