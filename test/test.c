#include <stdio.h>
#include <stdlib.h>

int main()
{

    int **arr;
    int temp[5];

    arr = (int **)malloc(2 * sizeof(int*));
    for(int i=0;i<2;i++){
        arr[i]=malloc(3*sizeof(int));
    }

    for (int i = 0; i < 2; i++)
    {
        for(int k=0;k<3;k++){
        scanf("%d", &arr[i][k]);
        }
    }
  for (int i = 0; i < 2; i++)
    {
        for(int k=0;k<3;k++){
        printf("%d", arr[i][k]);
        }
        printf("\n");
    }

    free(arr);

    return 0;
}
