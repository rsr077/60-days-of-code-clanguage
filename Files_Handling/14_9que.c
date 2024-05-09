#include<stdio.h>
#include<process.h>
#include<stdlib.h>


void main(){
    FILE *f;
    char c;
    f=fopen("list.txt","r");
    if(f==NULL);
    {
        printf("\n Cannot open fiel");
        exit();
    }
    while((c=getc(f)!=EOF))
    printf("%c",c);
    fclose(f);
}