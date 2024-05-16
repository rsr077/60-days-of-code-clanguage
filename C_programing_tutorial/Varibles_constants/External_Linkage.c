#include<stdio.h>
int a;
int main(){
   a=2;
   extern int a;

   int myfun()
   {
    printf("%d",a);
   }
    return 0;
}