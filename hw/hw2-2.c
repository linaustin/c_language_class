#include <stdio.h>

int main(void)
{
    float hours[4] = {0}, charge[4] = {0}, extrahour;
    char *string[4] = {"  car", "hour", "charge", "total"};

    printf("enter the hours parked for 3  cars : ");

    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &hours[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        extrahour = 0;

        if (hours[i] < 3)
        {
            charge[i] = 2;
            charge[3] += charge[i];
            hours[3] += hours[i];
        }
        else
        {
            extrahour = hours[i] - 3;
            charge[i] = 2 + extrahour * 0.5;

            if (charge[i] > 10)
            {
                charge[i] = 10;
            }
            charge[3] += charge[i];
            hours[3] += hours[i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s", string[i]);
        printf("  ");
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {

        printf("%5d", i + 1);
        printf("  ");
        printf("%-.2f", hours[i]);
        if (hours[i] < 10)
        {
            printf("   ");
        }

        else
        {
            printf("  ");
        }

        printf("%-.2f\n", charge[i]);
    }

    printf("%s", string[3]);
    printf("  ");
    printf("%-.2f", hours[3]);
    if (hours[3] < 10)
    {
        printf("   ");
    }

    else
    {
        printf("  ");
    }
    printf("%-.2f\n", charge[3]);
    
    return 0;
}