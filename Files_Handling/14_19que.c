#include<stdio.h>
#include<process.h>
#include<stdlib.h>

void main(){
    FILE *fp;
    char next ='y';
    struct bike
    {
        char name[40];
        int avg;
        float cost;
    };
    struct bike e;
    fp=fopen("bk.txt","wb");
    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    while (next=='Y')
    {
 printf("\n Model Name Average,Prize:");
 scanf("%s %d %f",e.name,&e.avg,&e.cost);
 fwrite(&e,sizeof(e),1,fp);
 printf("\nAdd Another(Y/N:");
 fflush(stdin);
 next=getche();
    }
    fclose(fp);
}