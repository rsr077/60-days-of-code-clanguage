#include<stdio.h>
#include<process.h>
void main(){
    FILE *fp;
    char c =' ';
    fp=fopen("data.txt","w+");
    if(fp==NULL)
    {
        printf("Can not open file");
        exit(1);
    }
    printf("Write data &to stop prees'.':");
    while(c!='.')
    {
        c=getch();
        fputc(c,fp);

    }
    rewind(fp);
    printf("\n Contents read:");
    while(!feof(fp))
    printf("%c",getc(fp));
}