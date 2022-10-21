#include <stdio.h>

void max(int array[4]);

int main(void)
{

    int num[4];

    printf("enter four integers:");

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &num[i]);
    }

    max(num);

    printf("largest: %d\n", num[3]);

    

    return 0;
}

void max(int array[4])
{
    int k;

    for (k = 0; k < 4; k++)
    {

        if (array[k] > array[k + 1])
        {

            array[k + 1] = array[k];
        }
    }
}