#include<stdio.h>


    void findElement(int arr[],int size,int key)
    {
        for(int i=0;i<size;i++){
            if(arr[i]==key){
                printf("Element found at position:%d",(i+1));
                break;
            }
        }
    }
   int main(){
    int arr[]={1,2,3,4,5,6};
    int n =6;
    int key =4;
    findElement(arr,n,key);
    return 0;
   }
