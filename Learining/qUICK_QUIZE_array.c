#include<stdio.h>
#include<string.h>

struct employee{
    int salary;
    float hike;
    char name[10];
};
int main(){
    int a =45;
    struct employee facebook[3];
    printf("Enter the details for Rajeev\n");
    printf("Enter name for facebook[0].n");
    scanf("%s",facebook[0].name);
    printf("Enter salary for facebook[0].n");
    scanf("%d",&facebook[0].salary);
    printf("Enter hike for facebook[0].n");
    scanf("%f",&facebook[0].hike);

     printf("Enter the details for Rohit\n");
    printf("Enter name for facebook[1].n");
    scanf("%s",facebook[1].name);
    printf("Enter salary for facebook[1].n");
    scanf("%d",&facebook[1].salary);
    printf("Enter hike for facebook[1].n");
    scanf("%f",&facebook[1].hike);

    printf("Enter the details for facebook[2].n");
    printf("Enter name for facebook[2].n");
    scanf("%s",facebook[2].name);
    printf("Enter salary for facebook[2].n");
    scanf("%d",&facebook[2].salary);
    printf("Enter hike for facebook[2].n");
    scanf("%f",&facebook[2].hike);

 printf("The name of the employee is %s\n",facebook[0].name);
    printf("The salary of the employee  is %d\n",facebook[0].salary);
    printf("The hike of the employee is %f\n",facebook[0].hike);

 printf("The name of facebook[1].s %s\n",facebook[1].name);
    printf("The salary of facebook[1]. is %d\n", facebook[1].salary);
    printf("The hike of facebook[1].is %f\n",facebook[1].hike);

 printf("The name of facebook[2].is %s\n",facebook[2].name);
    printf("The salary of facebook[2].is %d\n", facebook[2].salary);
    printf("The hike of facebook[2].is %f\n",facebook[2].hike);
    return 0;

}