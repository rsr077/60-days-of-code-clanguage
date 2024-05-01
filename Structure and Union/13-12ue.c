#include<stdio.h>
void main(){
    int *p;
    struct num
    {
        int a;
        int b;
        int c;
    };
    struct num d;
    d.a=2;
    d.b=3;
    d.c=4;
    p=&d.a;
    printf("\n a=%d",*p);
    printf("\n b=%d",*(++p));
    printf("\n c=%d",*(++p));
}