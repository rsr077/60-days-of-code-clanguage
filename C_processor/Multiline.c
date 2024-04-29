#include<stdio.h>

// Multi-line Macro definition
#define ELE 1,\
            2,\
            3
            int main(){
                // Array arr[] with elements
                int arr[]={ELE};
                printf("Elements of Array are :\n");
                for (int i=0;i<3;i++){
                    printf("%d",arr[i]);

                }
                return 0;
            }