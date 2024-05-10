#include<stdio.h>
#include<process.h>
void main(){
    FILE *fp;
    struct bike
    {
        char name[40];
        int avg;
        float cost;
    };
    struct  bike e;
    fp=fopen("bk.txt","rb");
    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    while(fread(&e,sizeof(e),1,fp)==1)
    printf("\n%s %d %.2f",e.name,e.avg,e.cost);
    fclose(fp);
  
}