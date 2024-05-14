#include<stdio.h>
#include<stdlib.h>

int main(){
    int*ptr;
    int size;

    // size of the array 
    printf("Enter size of elemets:");
    scanf("%d",&size);
    // Memory allocates dynamically using calloc()
    ptr=(int*)malloc(size*sizeof(int));
    // Checking for memory allocation
    if(ptr==NULL){
        printf("Memory not allocated.\n");
    }
    else{
        // Memory allocated 
        printf("Memory successfully allocated using" "malloc.\n");
        // get teh elements of the array
        for(int j=0;j<size;++j){
            ptr[j]=j+1;
        }
        // Print the elements of the array
        printf("The elements of the array are:");
        for(int k=0;k<size;++k){
            printf("%d,",ptr[k]);
        }
    }

    return 0;
}