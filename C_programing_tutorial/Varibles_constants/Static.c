#include<stdio.h>
void function()
{
    int x =20; // local variable
    static int y =30 ; // static variable 
    x=x+10;
    y=y+10;
    printf("\t Local:%d\n\t Static:%d\n",x,y);
}
int main(){
    printf("First Call\n");
    function();
    printf("Second call\n");
    function();
     printf("third call\n");
     function();
      printf("Second call\n");
 function();
  printf("Second call\n");
 function();
    return 0;
}