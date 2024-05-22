#include<stdio.h>

int main(){
    int var =789;
    int*ptr2;
    int** ptr1;
    ptr2=&var;
    ptr1=&ptr2;
    printf("Value of var =%d\n",var);
    printf("vale of var suing single pointer = %d\n",*ptr2);
    printf("vale of var suing double pointer = %d\n",*ptr2);
    return 0;
}