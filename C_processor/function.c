#include<stdio.h>
#define min(a,b)(((a) <(b)) ? (a):(b))

int main(){
    int a=18;
    int b=76;

    printf("Minimum vlue between""%d and %d is %d\n",a,b,min(a,b));
    return 0;
}