#include<stdio.h>
void main(){
    FILE *fp;
    char c;
    fp=fopen("text.txt","r");
    c=feof(fp);
    printf("File pointer at the beginnng of the fiel:%d\n",c);
    while(!feof(fp))
    {
        printf("%c",c);
        c=getc(fp);

    }
    c=feof(fp);
    printf("File pointer at the end of file :%d",c);
}