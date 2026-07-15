#include <stdio.h>

int main()
{
    int a, b, value;
    scanf("%d %d", &a, &b);

    if(b != 1)
    {
        value = a * a % 7;

        for(int i = 2; i < b; i++)
        {
            value = value * a % 7; 
        }

    }
    else value = a % 7;
    
    switch(value)
    {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 0: printf("Sunday"); break;
    }
    return 0;
}