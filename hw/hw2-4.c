#include <stdio.h>

int check(char *string1, char *string2);

int main(void)
{

    char *string1, *string2;
    int ans = 0;

    string2 = string1 + 1000;

    printf("enter string1: ");
    scanf("%s", string1);
    printf("enter string2: ");
    scanf("%s", string2);

    ans = check(string1, string2);

    if (ans == 0)
    {
        printf("string1 and string2 are the same\n");
    }

    else
    {
        printf("string1 and string2 are different\n");
    }

    return 0;
}

int check(char *string1, char *string2)
{

    int ans = 0;

    for (;; string1++, string2++)
    {

        if (*string1 != *string2)
        {
            ans = 1;
        }

        else if (*string1 == '\0' && *string2 == '\0')
        {
            break;
        }

        else if (*string1 == '\0' || *string2 == '\0')
        {
            ans = 1;
            break;
        }
    }

    return ans;
}