#include <stdio.h>

int main()
{
    int Int;
    bool Bool;
    scanf("%d", &Int);
    Bool = (bool)Int;
    Int = (int)Bool;
    printf("%d", Int);
    return 0;
}