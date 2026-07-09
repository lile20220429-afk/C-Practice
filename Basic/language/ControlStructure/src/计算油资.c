#include <stdio.h>

int main()
{
    int weight, expenses;
    char urgency;
    scanf("%d %c", &weight, &urgency);

    if(urgency == 'y')
    {
        expenses = 5;
    }
    else expenses = 0;

    if(weight <= 1000) expenses += 8;
    if(weight > 1000)
    {
        expenses += 8;
        if((weight - 1000) % 500 == 0)
        {
            expenses += (weight - 1000) / 500 * 4;
        }
        else expenses += (weight - 1000) / 500 * 4 + 4;
    }
    printf("%d", expenses);

    return 0;
}
