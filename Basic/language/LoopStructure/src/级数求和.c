#include <stdio.h>

int main()
{
    int k;
    float S = 0;
    scanf("%d", &k);

    for(int i = 1; ; i++)
    {
        S += 1.0 / i;

        if(S > k)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}