#include <stdio.h>

int main()
{
    for(int i = 0; i <= 20; i++)
    {
        for(int j = 0; j <= 40; j++)
        {
            for(int k = 0; k <= 300; k += 3)
            {
                if(i * 5 + j * 3 + k / 3 == 100 && i + k + j == 100)
                {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}