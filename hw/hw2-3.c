#include <stdio.h>
#include <stdlib.h>

void shift(char string[], int shiftamount);

int main(void)
{

    int shiftamount;

    char string[1000];
    char *b = string;
    size_t size = 1000;
    printf("enter messaage to be encrypted:\n");
    getline(&b, &size, stdin);
    printf("enter shift amount (1-25): ");
    scanf("%d", &shiftamount);

    shift(string, shiftamount);

    printf("%s\n", string);

    return 0;
}

void shift(char string[], int shiftamount)
{
    int temp;
    for (int i = 0; string[i] != '\0'; i++)

    {
        temp = string[i];
        printf("%d\n",temp);

        if (96 < temp && temp< 123)
        {
            if ((temp + shiftamount) <= 122)
            {
                temp += shiftamount;
            }

            else
            {
                shiftamount -= 26;
                temp += shiftamount ;
            }
        }

        else if (64 < temp && temp<91)
        {

            temp += shiftamount;

            if (temp > 90)
            {
                temp -= 26;
            }
        }
        string[i]=temp;
      
        printf("%d\n",temp);
    }
}
