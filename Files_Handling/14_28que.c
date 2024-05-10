#include<stdio.h>
void main(){
    FILE *fp;
    char ch;
    fp=fopen("text.txt","r");
    fseek(fp,21,SEEK_SET);
    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c\t,ch");
        printf("%d\n",ftell(fp));
        ch=fgetc(fp);
    }
    fclose(fp);
}