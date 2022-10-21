#include <stdio.h>

int main(void)
{

    float workhours = 0, payrate, extrahour = 0, salary;

    while (workhours >= 0)
    {

        printf("enter # of hours worked (-1 to end): ");
        scanf("%f", &workhours);

        if (workhours < 0)
        {
            break;
        }

        printf("enter hourly rate of the worker ($00.00): ");
        scanf("%f", &payrate);

        if (workhours > 40)
        {
            extrahour = workhours - 40;
            workhours = 40;
        }

        else
        {
            extrahour = 0;
        }

        salary = (workhours * payrate) + (extrahour * payrate * 1.5);

        printf("salary is $%.2f\n\n", salary);
    }

    return 0;
}