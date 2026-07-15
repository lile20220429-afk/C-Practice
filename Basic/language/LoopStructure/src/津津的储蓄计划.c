#include <stdio.h>

int main()
{
    int expenses[12];
    int remain = 0;
    int back = 0;

    for(int i = 0; i < 12; i++)
    {
        scanf("%d", &expenses[i]);
    }

    for(int i = 0; i < 12; i++)
    {
        remain = remain + 300 - expenses[i];

        if(remain < 0) 
        {
            printf("%d", -i-1);
            return 1;
        }
        else
        {
            back += remain / 100 * 100;
            remain = remain % 100;
        }
        
    }

    remain = remain + back * 120 / 100;
    printf("%d", remain);
    return 0;
}