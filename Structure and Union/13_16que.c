#include<stdio.h>
#define H 60
int main(){
    typedef int hours;
    hours hrs;
    printf("Enter Hours:");
    scanf("%d",&hrs);
    printf ("\n Minutes =%d",hrs*H);
    printf("\n Second-=%d",hrs*H*H);
    printf("\n mili Second-=%d",hrs*H*H*H);
}