#include <stdio.h>

int main(void)
{

    int number, ans = 0;

    printf("type a number under 5\n");
    scanf("%d", &number);

    ans = number + 1;

    for (int n = 0; n < number; n++)
    {
        ans = ans - 1;

        printf("%d\n", ans);
    }

    return 0;
}