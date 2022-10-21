#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char string[1000];
    char *s = string;
    size_t size = 1000;
    printf("enter a string:\n");
    getline(&s, &size, stdin);
    int num[10] = {0};
    int i, k;
    for (i = 0; string[i] != '\0'; i++)
    {
        for (k = 0; k < 10; k++)
        {
            if (string[i] - '0' == k)
            {
                num[k] += 1;
            }
        }
    }
    printf("ans is :\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
