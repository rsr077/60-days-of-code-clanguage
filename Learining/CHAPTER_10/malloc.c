#include<stdio.h>
#include<malloc.h>

int main(){
    int *ptr;
    ptr(int *)malloc(30*sizeof(int));
    ptr[0]=45;
    ptr[12]=46;
    ptr[2]=47;
    ptr[3]=48;
    printf("%d",ptr[2]);
    return 0;
}