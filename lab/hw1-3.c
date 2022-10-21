#include <stdio.h>

float balance(float loan, float rate, float payment, int month);

int main(void)
{

    float loan, rate, payment;

    printf("enter amount of loan: ");
    scanf("%f", &loan);
    printf("\n");
    printf("enter interest rate: ");
    scanf("%f", &rate);
    printf("\n");
    printf("enter monthly payment: ");
    scanf("%f", &payment);
    printf("\n");

    rate = rate / 12;

    int month;

    for (month = 0; month < 3; month++)
    {

        if (month == 0)
        {

            printf("balance remaining after first payment: $%.2f\n", balance(loan, rate, payment, month));
        }

        else if (month == 1)
        {

            printf("balance remaining after second payment: $%.2f\n", balance(loan, rate, payment, month));
        }

        else if (month == 2)
        {

            printf("balance remaining after third payment: $%.2f\n", balance(loan, rate, payment, month));
        }
    }

    return 0;
}

float balance(float loan, float rate, float payment, int month)
{

    int time;
    for (time = 0; time < month + 1; time++)
    {

        loan = loan * (1+(rate/100));

        loan -= payment;
    }

    return loan;
}