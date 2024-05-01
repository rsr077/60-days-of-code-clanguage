#include<stdio.h>
void main(){
    int k=0;
    struct stud
    {
        char name[12];
        int rollno;
        char grade[2];
    };
    struct stud st[3];
    while (k<3){
    gotoxy(2,4);
    printf("Name :");
    gotoxy(17,4);
    scanf("%s",st[k].name);
    gotoxy(2,6);
    printf("Grade :");
    gotoxy(17,6);
    scanf("%s",st[k].grade);
    st[k].grade[1]='\0';
    puts("press any key..");
    getch();
    k++;
}
k=0;
printf("\n Name \t rollno\ Grade\n");
while(k<3)
{
    printf("\n %s \t %d \t T=%s",st[k].name,st[k].rollno,st[k].grade);
    k++;
}
}