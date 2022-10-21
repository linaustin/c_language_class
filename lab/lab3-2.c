#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int num, temp = 1, ans = 0;

    printf("enter a number \n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {

        for (int k = 0; k < i + 1;k++)
        {
            temp = temp * (k + 1);
            if (temp == 1)
            {
                printf("%d", temp);
            }

            else
            {
                printf("+%d", temp);
            }

            ans = ans + temp;
        }

        printf("=%d\n", ans);
        temp=1;
        ans=0;
    }

    return 0;
}