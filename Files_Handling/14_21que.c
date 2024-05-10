#include<stdio.h>
void main(){
    FILE *fp;
    int n,ch;
    fp=fopen ("text.txt","r");
    printf("\n Contents of file\n");
    while ((ch=fgetc(fp))!=EOF)
    printf("%c",ch);
    printf("\n Hoe many characters inculuding spaces would you like to skip?:");
    scanf("%d",&n);
    fseek(fp,n,SEEK_SET);
    printf("\n Information after %d bytes\n",n);
    while((ch=fgetc(fp))!=EOF)
    printf("%c",ch);
    fclose(fp);
}