#include <stdio.h>
#include <stdlib.h>

int *numOfbook;
int **numOfpage;
int shelves;

void request(int func1, int func2, int func3);

int main(void)
{
    int numofrequest;
    int i, k;
    printf("number of shelve: ");
    scanf("%d", &shelves);
    printf("number of request: ");
    scanf("%d", &numofrequest);
    numOfbook = (int *)calloc(shelves, sizeof(int));
    numOfpage = (int **)malloc(shelves * sizeof(int *));
    for (int i = 0; i < shelves; i++)
    {
        numOfpage[i] = (int *)calloc(10000 , sizeof(int));
    }
    int requestlist[numofrequest][3];
    for (i = 0; i < numofrequest; i++)
    {
        for (k = 0; k < 3; k++)
        {
            scanf("%d", &requestlist[i][k]);
        }
    }
    for (i = 0; i < numofrequest; i++)
    {
        request(requestlist[i][0], requestlist[i][1], requestlist[i][2]);
    }
    free(numOfbook);
    free(numOfpage);
    return 0;
}

void request(int func1, int func2, int func3)
{
    if (func1 == 1)
    {
        numOfbook[func2] += 1;
        numOfpage[func2][numOfbook[func2] - 1] = func3;
    }
    else if (func1 == 2)
    {
        printf("%d\n", numOfpage[func2][func3]);
    }
    else if (func1 == 3)
    {
        printf("%d\n", numOfbook[func2]);
    }
}
