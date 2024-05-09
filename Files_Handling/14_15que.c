#include<stdio.h>
#include<process.h>
#include<stdlib.h>

void main(){
    FILE *fp;
    int v;
    fp=fopen("num.txt","w");
    if(fp==NULL)
    {
        printf("\n Filw dose not exist");
        exit(1);
    }
    else
    {
        printf("\n Enter Nubers:");
        while(1)
        {
            scanf("%d",&v);
            if(v==0)
            {
                fclose(fp);
                exit(1);
            }
            putw(v,fp);
        }
    }
}