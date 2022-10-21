#include <stdio.h>
#include <stdlib.h>

void trans(int **square, int num);
int raw;
int r, l;
int margin = 0;

int main(void)
{
    int target;
    int i, k;
    printf("eneter a number :");
    scanf("%d", &target);
    printf("\n");

    raw = (2 * (target - 1)) + 1;

    int **square = (int **)malloc(raw * sizeof(int *));
    for (int i = 0; i < raw; i++)
    {
        square[i] = malloc(raw * sizeof(int));
    }
    for (i = 0; i < raw; i++)
    {
        for (k = 0; k < raw; k++)
        {
            square[i][k] = 0;
        }
    }
    trans(square, target);
    for (i = 0; i < raw; i++)
    {
        for (k = 0; k < raw; k++)
        {
            printf("%d", square[i][k]);
        }
        printf("\n");
    }
    return 0;
}

void trans(int **square, int num)
{
    if (num == 0)
    {
        return;
    }
    for (r = margin; r < (raw - margin); r++)
    {
        for (l = margin; l < (raw - margin); l++)
        {
            square[r][l] = num;
        }
    }
    margin += 1;
    num -= 1;
    trans(square, num);
}