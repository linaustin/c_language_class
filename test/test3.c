#include<stdio.h>



void swap(int *a,int *b);


int main(void){

int num1=1,num2=2;

int *addrnum1,*addrnum2;

addrnum1=&num1;
addrnum2=&num2;


swap(addrnum1,addrnum2);

printf("num1 is %d\nnum2 is %d\n",num1,num2);



return 0;

}

void swap(int *a,int *b){

int temp;

temp=*a;
*a=*b;
*b=temp;





}