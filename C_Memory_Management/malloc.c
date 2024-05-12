#include<stdio.h>
#include<stdlib.h>

int main(){
    // This pointr will hold the 
    int*ptr;
    int n,i;

    // Get the nuber of elements for the array
    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("Entered nuber of elements:%d\n",n);
    // Dynamically allocate memory using malloc()
    ptr =(int*)malloc(n*sizeof(int));
    // check if the meomey has been successfully 
    // allocated by malloc or not 
    if(ptr==NULL){
        printf("Memory not allocated .\n");
        exit (0);
        
    }
    else{
        // Memory has been successfuly allocated
        printf("Memory successfully allocated using malloc.\n");
for (i=0;i<n;++i){
    ptr[i]=i+1;
}

printf("The elements of the array are:");
        for (i=0;i<n;++i){
            printf("%d,",ptr[i]);
        }
    }
    return 0;

}