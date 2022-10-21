#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int ans, guessNumber = -1, max = 100, min = 1, playerStep = 0;

    printf("Guess number!!!\n");
    printf("If you want to give up ,enter 0\n");
    srand(time(NULL));
    ans = (rand() % 100) + 1;

    while (guessNumber != 0)
    {
        printf("guess a number \n");
        scanf("%d", &guessNumber);
        playerStep = playerStep + 1;

        while (guessNumber != 0 && (guessNumber < min || guessNumber > max))
        {
            printf("\nyou should guess from %d to %d\nguess a new number\n", min, max);
            scanf("%d", &guessNumber);
            playerStep = playerStep + 1;
        }

        if (guessNumber == 0)
        {
            playerStep = playerStep - 1;
        }

        else if (guessNumber < ans && guessNumber != 0)
        {
            min = guessNumber;
            printf("\nanswer is larger than %d\nnumber is between %d and %d\n\n", guessNumber, min, max);
        }

        else if (guessNumber > ans && guessNumber != 0)
        {
            max = guessNumber;
            printf("\nanswer is smaller than %d\nnumber is between %d and %d\n\n", guessNumber, min, max);
        }

        else if (guessNumber = ans && guessNumber != 0)
        {
            printf("\nBingo!\n", ans);
            guessNumber = 0;
        }
    }
    printf("\nThe answer is %d\n", ans);
    printf("Your step is %d\n\nend\n", playerStep);
    system("pause");
    return 0;
}
