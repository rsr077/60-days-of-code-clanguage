#include<stdio.h>

int main(){
    int arr[5]={10,20,30,40,50};
    int*ptr=&arr[0];
    printf("Address Stored in Array name:%p\nAddress of ""1st Array Elememt:%p\n",arr,&arr[0]);
    printf("Array elements using pointer:");
    for(int i=0;i<5;i++){
        printf("%d",*ptr++);
    }
   
    return 0;
}