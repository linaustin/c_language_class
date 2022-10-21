#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float area(float num1, float num2, float num3);
int main(void)
{
    int list;
    printf("number of triangle: ");
    scanf("%d", &list);
    float **data;
    int *order;
    data = (float **)malloc(list * sizeof(float *));
    for (int i = 0; i < list; i++)
    {
        data[i] = (float *)malloc(4 * sizeof(float));
    }
    order = malloc(list * sizeof(int));
    for (int i = 0; i < list; i++)
    {
        order[i] = 0;
    }
    for (int raw = 0; raw < list; raw++)
    {
        for (int line = 0; line < 3; line++)
        {
            scanf("%f", &data[raw][line]);
        }
    }
    for (int i = 0; i < list; i++)
    {
        data[i][3] = area(data[i][0], data[i][1], data[i][2]);
    }
    for (int i = 0; i < list; i++)
    {
        for (int k = 0; k < list; k++)
        {
            if (data[i][3] <= data[k][3])
            {
                order[i] += 1;
            }
        }
    }
    printf("\nans is\n");
    for (int i = list; i > 0; i--)
    {
        for (int k = 0; k < list; k++)
        {
            if (order[k] == i)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("%.0f ", data[k][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
float area(float num1, float num2, float num3)
{
    float s = (num1 + num2 + num3) / 2;
    float ans = s * (s - num1) * (s - num2) * (s - num3);
    ans = sqrt(ans);
    return ans;
}