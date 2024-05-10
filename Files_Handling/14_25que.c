#include<stdio.h>
#include<process.h>
#include<stdlib.h>

void main(){
    FILE *fp;
    char next='Y';
    char name [25];
    int marks;
    float p;
    fp=fopen("marks.dat","r");
    if(fp==NULL)
    {
        puts("Can not open file");
        exit(1);
    }
    while(next=='Y')
    {
        printf("\nEnter Name,Marks,Percentage");
        scanf("%s %d %f",name,&marks);
        p=marks/7;
        fprintf(fp,"%s %d %f ",name,&marks,&p);
        if(ferror(fp))
        {
            printf("\n Unable to write data ?");
            printf("\n File opening mode is incorrect.");
            fclose(fp);
            exit(1);
        }
        printf("Continue(Y?N");
        fflush(stdin);
        next=getche();
    }
    fclose(fp);
}