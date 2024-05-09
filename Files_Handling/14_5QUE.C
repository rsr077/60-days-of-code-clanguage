#include<stdio.h>
#include<process.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char c=' ';
    fp=fopen("data.txt","r+");
    if(fp==NULL);
    {
        printf("Can not open file");
        exit(1);
    }
    printf("\n Contents read:");
    while(!feof(fp))
    printf("%c",getc(fp));
    printf("Write data &to stop press'.':");
    while(c!='.'){

        fputc(c,fp);

    }
    return 0;
}