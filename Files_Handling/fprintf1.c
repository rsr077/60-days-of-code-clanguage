#include<stdio.h>
#include<process.h>
int main(){
    FILE *fp;
    char text[30];
    fp=fopen("Text.txt","w");
    printf("Eneter Text Here:");
   
    fprintf(fp,"%s",text);
    fclose(fp);
    return 0;
}