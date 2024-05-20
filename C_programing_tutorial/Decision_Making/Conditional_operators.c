#include<stdio.h>

int main(){
    int var;
    int flag =0;
    var =flag ==0 ?25 :-25;
    printf("Value of var when flag is 0:%d\n",var);
    flag =1;
    var =flag == 0? 25:-25;
 printf("Value of var when flag is Not 0:%d",var);
    return 0;
}