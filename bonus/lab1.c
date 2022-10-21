#include <stdio.h>
#include <stdlib.h>

int arrfunction(int L);
int main(void)
{
    int num, ans;
    printf("enter a number:");
    scanf("%d", &num);
    ans = arrfunction(num);
    printf("the sum is: %d\n", ans);
    return 0;
}
int arrfunction(int L)
{
    int *arr;
    int sum = 0;
    arr = (int *)malloc(L * sizeof(int));
    for (int i = 0; i < L; i++)
    {
        scanf("%d", &arr[i]);

        sum += arr[i];
    }
    return sum;
    free(arr);
}
