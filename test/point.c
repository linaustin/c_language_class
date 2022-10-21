#include <stdio.h>
#include <math.h>

void swap(int *addr1, int *addr2);
int four(int *addr1);

int main(void)
{
    int a = 1, b = 2, *i, *j;
    int *addra, *addrb;

    addra = &a;
    addrb = &b;
    i=&addra;
    j=&addrb;

    swap(i,j);
    swap(addra, addrb);

    printf(" a is %d\n b is %d\n", *addra, *addrb);
    printf("&a is %p\n&b is %p\n",&a,&b);
    printf("addra is %p\naddrb is %p\n",addra,addrb);
    printf("&addra is %p\n&addrb is %p\n",&addra,&addrb);
    printf("a^4=%d\n", four(addra));

    return 0;
}
void swap(int *addr1, int *addr2)
{
    int temp;

    temp = *addr1;
    *addr1 = *addr2;
    *addr2 = temp;
}

int four(int *addr1)
{
    return pow(*addr1, 4);
}
