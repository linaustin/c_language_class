#include <stdio.h>

int main(void){

int numofstring,i;

printf("num of sting: ");
scanf("%d",&numofstring);

char *string[numofstring];

for(i=0;i<numofstring;i++){
    scanf("%s",&string[i]);
}










    return 0;
}