#include<stdio.h>
int main(){
    union result 
    {
        int marks;
        char grade;
    };
   struct res 
   {
    char name[15];
    int age;
    union result perf;

   }data;
   printf("Size of union:%d\n",sizeof(data.perf));
   printf("Size of Structure:%d \n",sizeof(data));
    
}