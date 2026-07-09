#include <stdio.h>

int main()
{
    int a, b;
    char character;
    scanf("%d %d %c", &a, &b, &character);
    if(b == 0)
    {
        printf("Divided by zero!");
        return 0;
    }
    switch(character)
    {
        case '+': printf("%d", a + b); break;
        case '-': printf("%d", a - b); break;
        case '*': printf("%d", a * b); break;
        case '/': printf("%d", a / b); break;
        default: printf("Invalid operator!");
    }
    return 0;
}