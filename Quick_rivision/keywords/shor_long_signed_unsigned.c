#include<stdio.h>

int main(){
    // short integer 
    short int a= 12345;
    // singned integer 
    signed int b=-34;
    // unsigned integer 
    unsigned int c=12;

// L or l i sused for 
// long int in C.
long int d=99998L;
printf("Integer value with a short int data:%hd\n",a);
printf("Integer value with a signed int data:%d\n",b);
printf("Integer value with a Unsigned int data:%u\n",c);
printf("Integer value with a Long int data:%ld\n",d);
    return 0;
}