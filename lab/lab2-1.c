#include <stdio.h>

int main(void)
{

    int num1, num2, num3;

    printf("type three number\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    int sum12, sum23, sum13;

    sum12 = num1 + num2;
    sum23 = num2 + num3;
    sum13 = num1 + num3;

    if (sum12 == num3)
    {
        printf("Good Pair\n");
    }

    else if (sum23 == num1)
    {
        printf("Good Pair\n");
    }

    else if (sum13 == num2)
    {
        printf("Good Pair\n");
    }

    else
    {
        printf("Not Good Pair\n");
    }

    return 0;
}