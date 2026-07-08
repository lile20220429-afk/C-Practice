#include <stdio.h>

int main()
{
    float weight, expenses;
    scanf("%f", &weight);
    if(weight <= 20)
    {
        expenses = weight * 1.68;
    }
    else
    {
        expenses = weight * 1.98;
    }
    printf("%.2f", expenses);
    return 0;
}