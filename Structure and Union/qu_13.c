#include<stdio.h>
struct bit 
{
    unsigned int m:3;
};
void main(){
    struct bit b={8};
    printf("\n m=%d",b.m);
}