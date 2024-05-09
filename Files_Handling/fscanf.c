#include<stdio.h>
int main(){
    FILE *fp;
    char text[15];
    int age;
    fp=fopen("Text.txt","w+");
    printf("Name\tAGE\n");
    scanf("%s %d",text,&age);
    fprintf(fp,"%s %d",text,age);
    printf("Name \tAge\n");
    fscanf(fp,"%s %d",text,&age);
    fclose(fp);
}