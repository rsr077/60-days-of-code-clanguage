#include<stdio.h>
#include<process.h>
#include<stdlib.h>

void main(){
    FILE *fp;
    char c=' ';
    fp =fopen("data.txt","w");
    if(fp==NULL)
    {
        printf("Cannot open file");
        exit(1);
    }
    printf("Write data &to stop press'':");
    while (c!='.')
    {
        c=getche();
        fputc(c,fp);

    }
    fclose(fp);
    printf("\n Contents read:");
    fp=fopen("data.txt","r");
    while (!feof(fp))
   
    
         printf("%c",getc(fp));
    
    
}