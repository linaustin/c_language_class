#include<stdio.h>

int main(void){

float height,weight,bmi;
int i;

printf("請輸入你的身高\n");
scanf("%f",&height);
printf("請輸入你的體重\n");
scanf("%f",&weight);


height=height*height;


bmi=weight/height;

printf("你的bmi是""%f\n",bmi);

return 0;
}