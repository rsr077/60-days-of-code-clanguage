#include<stdio.h>
#include<process.h>
struct record {
    char player[20];
    int age;
    int runs;
};
void main(){
    FILE *fp;
    struct record emp;
    fp=fopen("record.dat","w");
    if(fp==NULL)
    {
        printf("\n Can not open the file");
        exit(1);
    }
printf("\n Enter Player Name,Age&Runs Secord \n");
printf("\ ===== ====== ====== ========\n");
scanf("%s %d %d",emp.player,&emp.age,&emp.runs);
fwrite (&emp,sizeof(emp),1,fp);
fclose(fp);
if((fp=fopen("record.dat","r"))==NULL)
{
    printf("\n Errer in opening file ");
    exit(1);
}
printf("\n Record Entered is \n");
fread (&emp,sizeof(emp),1,fp);
printf("\n %s %d %d",emp.player,emp.age,emp.runs);
fclose(fp);

}
