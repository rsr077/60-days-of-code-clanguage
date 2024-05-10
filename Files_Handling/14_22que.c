#include<stdio.h>
#include<dos.h>
void main(){
    FILE *fp;
    int n,ch;
    fp=fopen("Text.txt","r");
    printf("\n Contents of file\n");
    while((ch=fgetc(fp))!=EOF)
    printf("%c",ch);
    printf("\n How many character icluding spaces would you like to skip?: ");
    scanf("%d",&n);
    fseek (fp,n-2,SEEK_END);
    printf("\n Last %d charcters of a file\n",-1*n);
    while((ch= fgetc(fp))!=EOF)
    printf("%c,ch");
    fclose(fp);

}