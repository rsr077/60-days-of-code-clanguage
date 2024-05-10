#include<stdio.h>
#include<process.h>

void main(){
struct 
{
    char name[20];
    int age;
}
stud [5];
FILE *fp;
int i,j=0,n;
char str [15];
printf("Enter the file name:");
scanf("%s",str);
fp=fopen(str,"rb");
if(fp==NULL)
{
    printf("File dose not exist \n");
    exit(1);
}
else
{
    printf("How Many Records:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Name:");
        scanf("%s",&stud[i].name);
        printf("Age:");
        scanf("%d",&stud[i].age);
    }
    while(j<n){
    fwrite(&stud,sizeof(stud),1,fp);
    j++;
    }
}
fclose(fp);
}