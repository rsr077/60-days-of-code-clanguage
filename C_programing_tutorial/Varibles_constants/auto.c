#include<stdio.h>
void function()
{
    int x=10; // local varible (also automatic)
    auto int y =20;// automatic variable 
    printf("Auto Varible:%d",y);
}

int main(){
    function();
    return 0;
}