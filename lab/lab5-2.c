#include <stdio.h>

int main(void)
{

    int year, i;
    float rate;

    printf("interest rate: ");
    scanf("%f", &rate);
    printf("enter number of years: ");
    scanf("%d", &year);

    double array[year][4];

    int row, line;

    for (row = 0; row < year; row++)
    {

        for (line = 0; line < 4; line++)
        {
            if (row == 0)
            {
                array[row][line] = 100 * (((rate + line) / 100) + 1);
            }

            else
            {
                array[row][line] = array[row - 1][line] * (((rate + line) / 100) + 1);
            }
        }
    }

    printf("\nyears");

    for (int i = 0; i < 4; i++)
    {
        printf("%5.0f", rate + i);
        printf("%c", '%');
    }
    printf("\n");

    for (row = 0; row < year; row++)
    {

        printf("%2d   ", row + 1);

        for (line = 0; line < 4; line++)
        {
            printf("%.2f ", array[row][line]);
        }

        printf("\n");
    }
    return 0;
}
