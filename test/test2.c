#include <stdio.h>


void pay_amount(int dollars, int *ans1, int *ans2, int *ans3, int *ans4);

int main(void)
{

    int dollars;
    int twenty=0, ten=0, five=0, one=0;



    printf("enter a dollar amount :");
    scanf("%d", &dollars);
    pay_amount(dollars, &twenty, &ten, &five, &one);

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);

    return 0;
}

void pay_amount(int dollars, int *ans1, int *ans2, int *ans3, int *ans4)
{

    while (dollars >= 20)
    {
        dollars -= 20;
        *ans1 += 1;
    }

    while (dollars >= 10)
    {
        dollars -= 10;
        *ans2 += 1;
    }

    while (dollars >= 5)
    {
        dollars -= 5;
        *ans3 += 1;
    }

    *ans4 = dollars;
}