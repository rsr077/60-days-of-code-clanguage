#include<stdio.h>
#include<stdlib.h>

int main(){
    // This pointr will hold the 
    int*ptr,ptr1;
    int n,i;

    // Get the nuber of elements for the array
    n=5;
    printf("Enter number of elements :%d\n",n);
    
   
    // Dynamically allocate memory using malloc()
    ptr =(int*)malloc(n*sizeof(int));
     // Dynamically allocate memory using calloc()
    ptr1 =(int*)calloc(n,sizeof(int));


    // check if the meomey has been successfully 
    // allocated by malloc or not 
    if(ptr==NULL||ptr1==NULL){
        printf("Memory not allocated .\n");
        exit (0);
        
    }
    else{
        // Memory has been successfuly allocated
        printf("Memory successfully allocated using malloc.\n");
free(ptr);
printf("\n Malloc Memory successfully freed.\n");
printf("\nMemory successfully allocated using calloc.\n");
free(ptr1);
printf("Calloc Memory successfully freed.\n");


    }
    return 0;

}