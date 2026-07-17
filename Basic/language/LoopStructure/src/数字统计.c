#include <stdio.h>

int main()
{
    int L, R;
    int num = 0, temp;
    scanf("%d %d", &L, &R);

    for(int i = L; i <= R; i++)
    {
        temp = i;

        while(temp != 0)
        {
            if(temp % 10 == 2)
            {
                num += 1;
            }

            temp /= 10;
        }
    }

    printf("%d", num);
    return 0;
}