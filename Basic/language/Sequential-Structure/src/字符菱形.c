#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%3c\n", ch);
    printf("%2c%c%c\n", ch, ch, ch);
    printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);
    printf("%2c%c%c\n", ch, ch, ch);
    printf("%3c\n", ch);
    return 0;
}