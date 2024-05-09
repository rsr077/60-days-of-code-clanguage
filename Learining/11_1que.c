#include<stdio.h>
#include<malloc.h>
int main(){
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    return 0;
}