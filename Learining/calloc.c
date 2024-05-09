#include<stdio.h>
#include<malloc.h>

int main(){
    float *ptr;
    int n;
    printf("Enter the size of your array\n");
    scanf("%d",&n);


    ptr=(int *) calloc(n, sizeof(int));
    free(ptr);
    ptr [0]=45;
    ptr[1]=46;
    ptr[2]=47;
    ptr[3]=48;
    printf("%d",ptr[2]);
    return 0;
}