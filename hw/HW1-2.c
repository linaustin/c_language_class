#include <stdio.h>

int prime(int num);

int main(void)
{

    int target, num = 2;

    printf("enter an integer value: ");
    scanf("%d", &target);
    printf("all prime numbers below %d are:\n", target);

    while (num <= target)
    {

        if (prime(num))
        {

            printf("%d ", num);
        }

        num += 1;
    }

    printf("\n");

    return 0;
}

int prime(int num)
{

    int factor = 0, i;

    for (i = 1; i <= num; i++)
    {

        if (num % i == 0)
        {

            factor += 1;
        }
    }

    if (factor == 2)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}