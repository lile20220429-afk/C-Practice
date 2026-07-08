#include <stdio.h>

int main()
{
    int n, x, y, reminder;
    scanf("%d %d %d", &n, &x, &y);
    if(y % x == 0)
    {
        reminder = n - y / x;
    }
    else
    {
        reminder = n - 1 - y / x;
    }
    if(reminder < 0)
    {
        reminder = 0;
    }
    printf("%d", reminder);
    return 0;
}