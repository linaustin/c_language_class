#include <stdio.h>
#include <math.h>

int poly(double x);

int main(void)
{

    double num = 1, ans;

    while (num != 0)
    {
        printf("enter a number :\n");
        scanf("%lf", &num);
        if (num == 0)
        {
            break;
        }

        ans = poly(num);
        printf("the output value is:\n %.0lf\n", ans);
    }

    return 0;
}



int poly(double x)
{

    double five, four, three, two, one, ans;

    five = (3 * pow(x, 5));
    four = (2 * pow(x, 4));
    three = (-5 * pow(x, 3));
    two = (-1 * pow(x, 2));
    one = 7 * x;
    ans = five + four + three + two + one - 6;
    return ans;
}