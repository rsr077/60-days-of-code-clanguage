#include<stdio.h>
void main(){
    FILE *fp;
    char file[20],text[50];
    int i=0;
    printf("Enter File Name:");
    scanf("%s",file);
    fp=open(file,"r");
    if(fp==NULL){

    printf("File not found\n");
    return ;

}
else 
{
    if(fgets(text,50,fp)!=NULL)
    while(text[i]!='\0')
    {
        putchar(text[i]);
        i++;
    }
}

    }
