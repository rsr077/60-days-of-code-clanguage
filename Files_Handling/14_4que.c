#include<stdio.h>
#include<process.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char c=' ';
    fp=fopen("data.txt","a+");
    if(fp==NULL)
    {
        printf("Can not open file");
        exit(1);
    }
    printf("Write data& to stop prees'.':");
    while (c!='.')
    {
        c=getch();
        fputc(c,fp);
    }
    printf("\n Contents read:");
    rewind(fp);
    while(!feof(fp));
    printf("%c",getc(fp));

}