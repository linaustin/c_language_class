#include <stdio.h>

int main(void)
{

    float sales = 0, salary;

    while (sales >= 0)
    {

        printf("enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
        if (sales >= 0)
        {

            salary = 200 + (sales * 0.09);
            printf("salary is: $%.2f\n\n", salary);
        }
    }

    return 0;
}