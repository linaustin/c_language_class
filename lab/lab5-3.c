#include <stdio.h>

int main(void)
{

    int score[4][5];
    float personAverage[4];
    float subjectAverage[5];

    int row, line;

    for (row = 0; row < 4; row++)
    {

        for (line = 0; line < 5; line++)
        {
            scanf("%d", &score[row][line]);
        }
    }

    for (row = 0; row < 4; row++)
    {

        if (row == 0)
        {
            printf("john");
        }

        else if (row == 1)
        {
            printf("mary");
        }

        else if (row == 2)
        {
            printf("sam ");
        }

        else if (row == 3)
        {
            printf("sue ");
        }
        personAverage[row] = 0;
        for (line = 0; line < 5; line++)
        {
            printf("%5d", score[row][line]);
            personAverage[row] += score[row][line];
        }

        printf(" %2.2f\n", (personAverage[row] / 5));
    }

    printf("\nAvg    ");
    for (line = 0; line < 5; line++)
    {
        subjectAverage[line] = 0;
        for (row = 0; row < 4; row++)
        {
            subjectAverage[line] += score[row][line];
        }
        subjectAverage[line] = subjectAverage[line] / 4;
    }

    for (line = 0; line < 5; line++)
    {

        printf("%5.2f", subjectAverage[line]);
    }
    printf("\n");

    return 0;
}
