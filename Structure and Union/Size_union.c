#include<stdio.h>
union test1{
    int x;
    int y;
}Test1;
union test2{
    int x;
    int y;
}Test2;
union test3{
    int arr[10];
    char y;
}Test3;
int main(){
    int size1 =sizeof(Test1);
    int size2 =sizeof(Test2);
    int size3=sizeof(Test3);
    printf("Sizeof test:%d\n",size1);
    printf("Sizeof test:%d\n",size1);
    printf("Sizeof test:%d\n",size1);
}