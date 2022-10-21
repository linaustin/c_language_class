#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int number = 1,ans=0;

    while (number >= 0)
    {
        ans=0;
        printf("enter a nonnegative number\n");
        scanf("%d", &number);
        if(number<0){
            break;
        }
        while(number>=10){
            number=number/10;
            ans=ans+1;
            
        }

        printf( "The number has %d digit(s)\n",ans+1);
    }

    return 0;
}