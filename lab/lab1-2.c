#include<stdio.h>

int main(){

double x,y,ans1,ans2,ans3,ans4;


printf("請輸入兩個數字\n");
scanf("%lf %lf",&x,&y);

ans1=x+y;
ans2=x-y;
ans3=x*y;
ans4=x/y;

printf("結果\n");
printf("%lf + %lf = %lf\n",x,y,ans1);
printf("%lf - %lf = %lf\n",x,y,ans2);
printf("%lf * %lf = %lf\n",x,y,ans3);
printf("%lf / %lf = %lf\n",x,y,ans4);

return 0;

}
