#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            for(int k = 0; k < x; k++)
            {
                if((i * 6 + j * 5 + k * 4) == x)
                {
                    printf("%d %d %d", i, j, k);
                    return 0;
                }
            }
        }
    }

}