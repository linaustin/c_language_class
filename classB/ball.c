#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int playerNumber, player1 = 0, player2 = 0;
    int player1Ball, computerBall, player2Ball, computerStep = 0;

    printf("how many players?\n");
    scanf("%d", &playerNumber);

    while (playerNumber < 1 || playerNumber > 2)
    {
        printf("playernumber should be 1 or 2\n");
        printf("type a new number\n");
        scanf("%d", &playerNumber);
        if (playerNumber == 1 || playerNumber == 2)
        {
            break;
        }
    }

    int ball;
    srand(time(NULL));
    ball = (rand() % 61) + 30;
    printf("take 1 or 2 or 3 in one turn\nWho take the last ball is lose\n\n");
    printf("there are %d balls\n\n", ball);

    while (playerNumber == 1)
    {

        printf("player 1 take ball\n");
        scanf("%d", &player1Ball);

        while (player1Ball < 1 || player1Ball > 3)
        {
            printf("you shluld take 1 to 3 balls\ntake ball again\n");
            scanf("%d", &player1Ball);
        }

        ball = ball - player1Ball;
        if (ball <= 0)
        {
            printf("you take the last ball\nyou lose!\n");
            break;
        }

        printf("there are %d balls\n\n", ball);

        printf("computer take ball\n");

        computerStep = computerStep + 1;

        if ((computerStep % 4 )!= 0)
        {

            computerBall = ((ball % 4) - 1);
        }

        while ((computerStep % 4) == 0)
        {
            srand(time(NULL));
            computerBall = (rand() % 3) + 1;

            if (computerBall != ((ball % 4) - 1))
            {
                break;
            }
        }

        if (computerBall <= 0)
        {
            srand(time(NULL));
            computerBall =(rand() % 2) + 1;
        }
        switch (ball)
        {

        case 4:
            computerBall = 3;
            break;
        case 3:
            computerBall = 2;
            break;
        case 2:
            computerBall = 1;
            break;
        case 1:
            computerBall = 1;
            break;
        }

        printf("%d\n", computerBall);
        ball = ball - computerBall;
        if (ball <= 0)
        {
            printf("computer take the last ball\nyou win!\n");
            break;
        }
        printf("there are %d balls\n\n", ball);
    }

    while (playerNumber == 2)
    {

        printf("player 1 take ball\n");
        scanf("%d", &player1Ball);

        while (player1Ball < 1 || player1Ball > 3)
        {
            printf("you shluld take 1 to 3 balls\n take ball again\n ");
            scanf("%d", &player1Ball);
        }

        ball = ball - player1Ball;
        if (ball <= 0)
        {
            printf("player1 take the last ball\nplayer2 win!\n");
            break;
        }
        printf("there are %d balls\n\n", ball);

        printf("player 2 take ball\n");
        scanf("%d", &player2Ball);

        while (player2Ball < 1 || player2Ball > 3)
        {
            printf("you shluld take 1 to 3 balls\ntake ball again\n ");
            scanf("%d", &player2Ball);
        }

        ball = ball - player2Ball;
        if (ball <= 0)
        {
            printf("player2 take the last ball\nplayer1 win!\n");
            break;
        }
        printf("there are %d balls\n\n", ball);
    }
    system("pause");
    return 0;
}
