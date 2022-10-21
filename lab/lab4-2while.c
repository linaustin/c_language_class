#include <stdio.h>


int main(void)
{

    int target, ans = 0;
    int divisor1 = 1, diviosr2;
    int factor = 0;/*目標數的因數個數*/

    printf("enter an integer\n");
    scanf("%d", &target);

    while (divisor1 <= target)/*檢查有幾個因數*/
    {

        if (target % divisor1 == 0)/*當divisor為目標數的因數時*/
        {
            factor = factor + 1;
        }
        divisor1 = divisor1 + 1;/*檢查下一個數是不是目標數的因數*/
    }

    int time1 = 0, time2;/*time1控制輸出第幾行,time2控制輸出第幾個*/

    while (time1 < factor)/*因為有n個因數就要輸出n行*/
    {

        time2 = 0;/*每行都要從第1個因數開始輸出*/
        diviosr2 = 1;/*每次的除數都要從1開始*/
        ans = 0;/*每行的答案在計算前都要歸0*/
        while (time2 < time1 + 1)/*第n行要輸出n個因數,所以要把time1還原成它代表的行數*/
        {
            if (target % diviosr2 == 0)/*diviosr為目標的因數時*/
            {

                if (time2 == 0)/*輸出第1個數時前面不用+號*/
                {
                    printf("%d", diviosr2);
                    ans = ans + diviosr2;/*把找到的因數加入ans中*/
                    time2 = time2 + 1;/*紀錄找到幾個因數了*/
                }

                else
                {
                    printf("+%d", diviosr2);
                    ans = ans + diviosr2;/*把找到的因數加入ans中*/
                    time2 = time2 + 1;/*紀錄找到幾個因數了*/
                }
            }

            diviosr2 = diviosr2 + 1;/*檢查下一個數是不是目標數的因數*/
        }
        printf("=%d\n", ans);/*輸出總和後要換行*/
        time1 = time1 + 1;/*紀錄輸出到第幾行了*/
    }

    return 0;
}