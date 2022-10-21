#include <stdio.h>

int main(void)
{

    int array[5][5];
    int row, time;

    for (int row = 0; row < 5; row++)
    {

        printf("enter row %d :\n", row + 1);

        for (int time = 0; time < 5; time++)
        {

            scanf("%d", &array[row][time]);
        }
    }

    printf("row total:");

    int ans[5] = {0};

    for (row = 0; row < 5; row++)
    {

        for (time = 0; time < 5; time++)
        {
            ans[row] += array[row][time];
        }
        printf(" %d", ans[row]);
    }
    printf("\n");

    printf("column totals:");

    for (time = 0; time < 5; time++)
    {
        ans[time] = 0;
        for (row = 0; row < 5; row++)
        {

            ans[time] += array[row][time];
        }
        printf(" %d", ans[time]);
    }

    printf("\n");

    return 0;
}