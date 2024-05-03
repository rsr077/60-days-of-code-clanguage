#include<stdio.h>
#include<dos.h>
/* Finding Memory Size*/
void main(){
    
    union REGS in,out;
   int86(18,&in,&out);
   printf("\n Total Memory =%d KB",out.x.ax); 
    }