#include<stdio.h>

int main(){
    // defining integer 
    const int var =10;
    printf("Initial Value of Constant:%d\n",var);
    // defining pointer 
     int* ptr = &var;
     // chaning value
     *ptr =500;
     printf("Final Valueof Constnat : %d",var);
    return 0;
}