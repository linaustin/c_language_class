#include <stdio.h>


int main(void)
{

    int target, ans = 0;
    int divisor1 = 1, divisor2 = 1, ordinal = 0;/*ordinal為要存入的陣列編號,所以要從0開始*/
    int factor = 0;

    printf("enter an integer\n");
    scanf("%d", &target);/*輸入目標數字*/

    while (divisor1 <= target)/*檢查因數的總數有幾個,方法是檢查有幾個樹除目標數的餘數為0*/
    {

        if (target % divisor1 == 0)
        {
            factor = factor + 1;
        }
        divisor1 = divisor1 + 1;
    }

    int data[factor];/*宣告儲存因數的陣列*/

    while (divisor2 <= target)/*把數字存入陣列中*/
    {
        if (target % divisor2 == 0)
        {
            data[ordinal] = divisor2;
            ordinal = ordinal + 1;
        }

        divisor2 = divisor2 + 1;
    }

    int time1, time2;/*time1控制輸出第幾行*//*time2控制輸出那一行的哪一個數字*/

    for (time1 = 0; time1 < factor; time1++)/*因為沒有用<=，所以time1為行數減1*//*有n個因數就需要輸出n行*/
    {

        ans = 0;/*每行計算前要把答案歸0*/

        for (time2 = 0; time2 < time1 + 1; time2++)/*因為沒有用<=所以time2為個數-1,也比較容易直接用time2去對應陣列的編號*//*因為第n行有n個數,所以要把time1還原成它代表的行數*/
        {
            if (time2 == 0)/*如果輸出第一個數字時前面不用+號*/
            {
                printf("%d", data[time2]);
                ans = ans + data[time2];/*每輸出一個數就把它加入ans中*/
            }

            else
            {
                printf("+%d", data[time2]);
                ans = ans + data[time2];/*每輸出一個數就把它加入ans中*/
            }
        }

        printf("=%d\n", ans);/*輸出答案後要換行*/
    }
    return 0;
}