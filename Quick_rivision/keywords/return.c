#include<stdio.h>
int sum (int X,int Y){
    int sum;
    sum =X +Y;
    return sum;
}

int main(){
    int num1=10;
    int num2 =20;
    printf("Sum:%d",sum(num1,num2));
    
    return 0;
}