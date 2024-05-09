#include<stdio.h>
void main(){
    FILE *fp;
    char file[12],text[50];
    printf("\n Enter teh name of file:");
    scanf("%s",file);
    fp=fopen(file,"w");
    if(fp==NULL)
    {
        printf("\file can not opened\n");
        return ;
    }
    else 
    {
        printf("\n Enter Text Here:\n");
        scanf("%s",text);
        fputs(text,fp);
    }
    fclose(fp);
}