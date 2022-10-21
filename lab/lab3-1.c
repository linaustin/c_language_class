#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int ans = 0, temp;

    for (int n = 0; n < 9; n++)
    {

        ans = 1;
        temp=1;
        printf("1");
        for (int k = 0; k < n+1; k++)
        {
            temp = 3 + (k * 2);
           
                printf("+%d", temp);
            
            ans = ans + temp;
        }
        
        printf("=%d\n", ans);
        
    }

    return 0;
}