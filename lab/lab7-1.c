#include <stdio.h>
#include <stdlib.h>

void pay_amount(int dollars, int *ans1, int *ans2, int *ans3, int *ans4);

int main(void)
{

    int dollars;
    int *twenty, *ten, *five, *one;

    twenty = malloc(sizeof(int));/* 指定記憶體為整數的大小*/
    *twenty = 0;
    ten = malloc(sizeof(int));
    *ten = 0;

    five = malloc(sizeof(int));
    *five = 0;
    one = malloc(sizeof(int));
    *one = 0;

    printf("enter a dollar amount :");
    scanf("%d", &dollars);
    pay_amount(dollars, twenty, ten, five, one);

    printf("$20 bills: %2d\n", *twenty);
    printf("$10 bills: %2d\n", *ten);
    printf("$5 bills: %.2d\n", *five);
    printf("$1 bills: %.2d\n", *one);

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