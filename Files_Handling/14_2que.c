#include<stdio.h>
#include<process.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char c;
    printf("Contents of file before appending:\n");
    fp=fopen("data.txt","r");
    while (!feof(fp))
    {
        c=fgetc(fp);
        printf("%c",c);
    }
    fp=fopen("dat.txt","a");
    if(fp==NULL)
    {
        printf("File can not appended");
        exit(1);
    }
    printf("\n Enter string to append:");
    while(c!='.')
    {
        c=getch();
        fputc(c,fp);
    }
    fclose(fp);
    printf("\n contents of file After appending:\n");
    fp=fopen ("data.txt","r");
    while(!feof(fp))
    {
        c=fgetc(fp);
        printf("%c",c);
    }
}