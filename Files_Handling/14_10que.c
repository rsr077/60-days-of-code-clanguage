#include<stdio.h>
void main(){
    int c;
    FILE *fp;
    printf("\n Enter Few words'*'to Exit\n");
    fp=fopen("Words.doc","w");
    while(c=getchar()!='*')
    putc(c,fp);
    fclose(fp);

}