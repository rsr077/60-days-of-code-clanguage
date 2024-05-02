#include<stdio.h>
int main(){
    typedef struct 
    {
        char name[20];
        char sex[2];
        int acno;
    }info;
    info employee[2];
    int k;
    for(k=0;k<2;k++)
    {
        printf("Name of the Employee:");
        scanf("%s",employee[k].name);
        printf("Sex :");
        scanf("%s",employee[k].sex);
        printf("A/c No. :");
        scanf("%d",&employee[k].acno);
    }
    printf("\n Name\t Sex /t A/c No.\n");
    for(k=0;k<2;k++){
    printf("%s \t",employee[k].name);
    printf("%s \t",employee[k].sex);
    printf("%s \t",employee[k].acno);
    
    }
}