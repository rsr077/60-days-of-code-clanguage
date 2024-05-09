#include<stdio.h>
#include<process.h>
#include<stdlib.h>

void main(){
    FILE *fp;
    int v;
    fp=fopen("num.txt","r");
    if(fp==NULL)
    {
        printf("\n File does not exit");
        exit(1);
    }
    else
    {
        printf("\n Enter number:");
        while(v=getw(fp)!=EOF)
        printf("%2d",v);
        fclose(fp);
    }
}