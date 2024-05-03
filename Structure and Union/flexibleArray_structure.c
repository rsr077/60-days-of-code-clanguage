#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    // A structure of type stuent 
    int stud_id;
    int name_len;
    //character array stud_name[]
    int struct_size;
    // Flexible array Member(FAM)
    char stud_name[];

};
// Memory allocation 
struct student*createStudent(struct student*s,int id,char a[])
{
    // array of Character
    s=malloc (sizeof(*s)+sizeof(char)*strlen(a));
    s->stud_id=id;
    s->name_len=strlen(a);
    strcpy(s->stud_name,a);
    // which is a copy of user provide array a[],
    s->struct_size
    =(sizeof(*s)+sizeof(char)*strlen(s->stud_name));
    return s;
}
void printfStudent(struct student *s)
{
    printf("Student_id:%d\n""stud_Name:%s\n"
    "Name _Length:%d\n"
    "Allocated_Struct_size:%d\n\n",
    s->stud_id,s->stud_name,s->name_len,s->struct_size);

}
int main(){
    struct student*s1=createStudent(s1,523,"Cherry");
    struct student* s2=createStudent (s2,535,"Sanjayulsha");
    printfStudent(s1);
    printfStudent(s2);
    printf("Size of Struct student:%lu\n",sizeof(struct student));
    printf("Size of Struct pointer:%lu",sizeof(s1));
    return 0;
   

}
