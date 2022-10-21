#include <stdio.h>

int raw(int num);

int main(void)
{

    int num;
    int ans;

    printf("enter a number:\n");

    scanf("%d", &num);

    ans = raw(num);

    printf("answer is\n %d\n", ans);

    return 0;
}

int raw(int num)
{
    int digit = 0;
    int temp;
    temp = num;

    while (temp > 10)
    {

        temp = temp / 10;
        digit += 1;
    }

    digit += 1;

    int numRaw[digit];

    int time, ans;

    for (time = 0; time < digit; time++)
    {

        numRaw[time] = (num % 10);
        num = num / 10;
    }

    ans = numRaw[0];

    for (time = 1; time < digit; time++)
    {
        ans = ans * 10;
        ans = ans + numRaw[time];
    }

    return ans;
}