#include<stdio.h>
#include<string.h>

struct employee{
    int salary;
    float hike;
    char name[10];
};
int main(){
    int a =45;
    struct employee Rajeev;
    strcpy(Rajeev.name,"Rajeev");
    Rajeev.hike =5.3;
    Rajeev.salary =100000;
    printf("The name of the employee is %s\n",Rajeev.name);
    printf("The salary of the employee  is %d\n",Rajeev.salary);
    printf("The hike of the employee is %f\n",Rajeev.hike);
    return 0;

}