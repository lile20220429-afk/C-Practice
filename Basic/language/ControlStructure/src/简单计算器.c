#include <stdio.h>

int main()
{
    float a, b;
    char character;
    scanf("%f %f %c", &a, &b, &character);
    if(b == 0)
    {
        printf("Divided by zero!");
        return 0;
    }
    switch(character)
    {
        case '+': printf("%g", a + b); break;
        case '-': printf("%g", a - b); break;
        case '*': printf("%g", a * b); break;
        case '/': printf("%g", a / b); break;
        default: printf("Invalid operator!");
    }
    return 0;
}