#include<stdio.h>
void main(){
    char c;
    while ((c=getc(stdin))!='\n')
    putc(c,stdout);
}