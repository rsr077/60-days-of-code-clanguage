#include<stdio.h>
#include<process.h>
void main(){
    FILE *fp;
    int l=0,c=0,ch;
    static char file [12];
    system ("dir *.c/w");
    printf("\n Enter a file name:");
    scanf("%s",file);
    fp=fopen(file,"r");
    printf("\n Contents of 'c'program File in capital case\n");
    printf("====================================================\n");
    while ((ch =fgetc(fp))!=EOF)
    {
        c++;
        if(ch=='\n')
        l++;
        printf("\n Total Character :%d",c);
        printf("\n Total Lines :%d",l);


    }


}