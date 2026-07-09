#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0) return 0;

    if(b * b - 4 * a * c < 0) printf("No answer!");

    else if(b * b - 4 * a * c == 0)
    {
        x1 = -b / (2 * a);
        printf("x1=x2=%.5lf", x1);
    }

    else
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

        double temp;

        if(x1 > x2)
        {
            temp = x1;
            x1 = x2;
            x2 = temp;
        }
        printf("x1=%.5lf;x2=%.5lf", x1, x2);
    }

    return 0;
}