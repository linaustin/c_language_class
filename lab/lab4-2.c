#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int targetNumber, ans = 0;
    int q = 1, k;
    int factor = 0;

    printf("enter an integer\n");
    scanf("%d", &targetNumber);

    while (q <= targetNumber)
    {

        if (targetNumber % q == 0)
        {
            factor = factor + 1;
        }
        q = q + 1;
    }

    int time1 = 0;
    int time2;

    while (time1 < factor)
    {

        int time2 = 0;
        k = 1;
        ans = 0;
        while (time2 < time1 + 1)
        {
            if (targetNumber % k == 0)
            {

                if (time2 == 0)
                {
                    printf("%d", k);
                    ans = ans + k;
                    time2 = time2 + 1;
                }

                else
                {
                    printf("+%d", k);
                    ans = ans + k;
                    time2 = time2 + 1;
                }
            }

            k = k + 1;
        }
        printf("=%d\n", ans);
        time1 = time1 + 1;
    }

    return 0;
}