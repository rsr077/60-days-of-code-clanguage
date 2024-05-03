#include<stdio.h>
#include<dos.h>
#include<conio.h>
/* positing Cursor on the console*/
void main(){
    union REGS in,out;
    in.h.ah=2;
    in.h.dh=20;
    in.h.d2=15;
    int86(16,&in,&out);
    printf("%s",__TIME__);
}