#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct ArrayWrapper 
{
    int arr[SIZE];
};
void modify(struct ArrayWrapper temp){
   
        int *ptr=temp.arr;
        int i;
        printf("In 'modify()'before modification\n");
        for(i=0;i<SIZE;++i)
        printf("%d",ptr[i]);
        printf("\n");
        for(i=0;i<SIZE;++i)
        ptr[i]=100;
        printf("\nIN'modify()',after modification\n");
        for(i=0;i<SIZE;++i)
        printf("%d",ptr[i]);
    }

int main(){
    int i;
    struct ArrayWrapper obj;
    for(i=0;i<SIZE;i++)
    obj.arr[i]=10;
    modify(obj);
    printf("\n\nIn 'Main',after calling modify()\n");
    for(i=0;i<SIZE;++i)
    printf("5d",obj.arr[i]);
    printf("\n");

    return 0;
}