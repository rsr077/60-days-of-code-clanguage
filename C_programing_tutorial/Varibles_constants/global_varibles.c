#include<stdio.h>
int a,b; // global variables
void add(){
    printf("%d",a+b);
}
int main(){
    a=10;
    b=15;
    add();
    return 0;
}