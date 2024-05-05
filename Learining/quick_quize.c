#include<stdio.h>
#include<string.h>

struct employee{
    int salary;
    float hike;
    char name[10];
};
int main(){
    int a =45;
    struct employee Rajeev,Rohit,Rohan;
    printf("Enter the details for Rajeev\n");
    printf("Enter name for Rajeev\n");
    scanf("%s",Rajeev.name);
    printf("Enter salary for rajeev\n");
    scanf("%d",&Rajeev.salary);
    printf("Enter hike for rajeev\n");
    scanf("%f",&Rajeev.hike);

     printf("Enter the details for Rohit\n");
    printf("Enter name for Rohit\n");
    scanf("%s",Rohit.name);
    printf("Enter salary for Rohit\n");
    scanf("%d",&Rohit.salary);
    printf("Enter hike for Rohit\n");
    scanf("%f",&Rohit.hike);

    printf("Enter the details for Rohan\n");
    printf("Enter name for Rohan\n");
    scanf("%s",Rohan.name);
    printf("Enter salary for Rohan\n");
    scanf("%d",&Rohan.salary);
    printf("Enter hike for Rohan\n");
    scanf("%f",&Rohan.hike);

 printf("The name of the employee is %s\n",Rajeev.name);
    printf("The salary of the employee  is %d\n",Rajeev.salary);
    printf("The hike of the employee is %f\n",Rajeev.hike);

 printf("The name of Rohitis %s\n",Rohit.name);
    printf("The salary of Rohit  is %d\n", Rohit.salary);
    printf("The hike of Rohit is %f\n",Rohit.hike);

 printf("The name of Rohan is %s\n",Rohan.name);
    printf("The salary of Rohan is %d\n", Rohan.salary);
    printf("The hike of Rohan is %f\n",Rohan.hike);
    return 0;

}