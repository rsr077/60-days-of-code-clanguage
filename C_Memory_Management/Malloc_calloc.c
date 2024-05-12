// between calloc and malloc 
#include<stdio.h>
#include<stdlib.h>

int main(){
    int*allocated_with_malloc =malloc(5*sizeof(int));
     int*allocated_with_calloc =malloc(5*sizeof(int));
     printf("Values of allocated_with_callo: ");
     for(size_t i=0;i<5;++i){
        printf("%d",allocated_with_calloc[i]);
     }
     putchar('\n');
     int* failed_malloc =malloc(1000000000000);
     if(failed_malloc==NULL){
        printf("The allocation failed,teh value of ""failed_malloc is :%p",(void*)failed_malloc);
     }
     // Remember to always free dynamically allocated memory.
     free(allocated_with_malloc);
     free(allocated_with_calloc);
     
    return 0;
}