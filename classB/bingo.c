#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int ans, guessNumber = 0,max=100,min=1;

    printf("Guess number!!!\n");
    srand(time(NULL));
    ans = (rand() % 100) + 1;

    while (guessNumber != ans)
    {
        printf("guess a number\n");
        scanf("%d", &guessNumber);
        while (guessNumber < 1 || guessNumber > 100)
        {
            printf("you should guess from 1 to 100\nguess a new number\n");
            scanf("%d", &guessNumber);
        }
        if (guessNumber < ans)
        {
            min=guessNumber;
            printf("answer is larger than %d\nnumber is between %d and %d\n", guessNumber,min,max);
        }

        else if (guessNumber > ans)
        {
            max=guessNumber;
            printf("answer is smaller than %d\nnumber is between %d and %d\n", guessNumber,min,max);
        }
    }

    printf("Bingo!\nanswer is %d\nend\n", ans);
    system("pause");
    return 0;

}
