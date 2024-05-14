#include<stdlib.h>
#include<stdio.h>_

int main(void){
    int*ptr;
    ptr=(int*)malloc(sizeof(int));
    if(ptr==NULL)
   printf("memory Is Insufficient\n");
   else{
    free(ptr);
    printf("Memory Freed\n");
   }
    
    return 0;
}