#include <stdio.h>

int main()
{
    char *string[3] = {"hi", "hello", "hola"};

    int i;
    char *k;

    /*for (i = 0; i < 3; i++)
    {

        printf("%s\n", string[i]);
    }

    for (i = 0; i < 3; i++)
    {

        for (int j=0; string[i][j] != '\0'; j += 1)
        {

            printf("%c",  string[i][j]);
        }
        printf("\n");
    }*/


  /*for (i = 0; i < 3; i++)
    {
        
        k=string[i];

        for (; *k != '\0'; k+= 1)
        {

            printf("%c",*k);
        }
        printf("\n");
    }*/
    

      for (i = 0; i < 3; i++)
    {
       

        for (; *string[i] != '\0'; string[i]+= 1)
        {

            printf("%c ",*string[i]);
            printf("%p\n",string[i]);
        }
        printf("\n");
    }

    

    return 0;
}
