#include<stdio.h>
#define MACRO(num,str) do{\
    printf("%d",num);\
    printf("is");\
    printf("%s number",str);\
    printf("\n");\
}while(0)


int main(void){
int num;
printf("Enter a number:");
scanf("%d",&num);
if(num&1)
MACRO(num,"Odd");
else
MACRO(num,"Even");
return 0;
}