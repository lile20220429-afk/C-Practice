#include <stdio.h>

int main()
{
    int hight, width;
    char character;
    int sign;

    scanf("%d %d %c %d", &hight, &width, &character, &sign);

    for(int y = 1; y <= hight; y++)
    {
        for(int x = 1; x <= width; x++)
        {
            if(sign == 1) printf("%c", character);
            else
            {
                if(y == 1 || y == hight) printf("%c", character);
                else
                {
                    if(x == 1 || x == width) printf("%c", character);
                    else printf(" ");
                }
            }
            
        }

        printf("\n");
    }
    return 0;
}