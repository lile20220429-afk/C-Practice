#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, root;
    for(int i = 1000; i <=9999; i++)
    {
        a = i / 1000;
        b = i / 100 % 10;
        c = i / 10 % 10;
        d = i % 10;

        if(a == b && c == d) 
        {
            root = (int)sqrt(i);
            if(root * root == i) printf("%d\n", i);
        }
    }
    return 0;
}