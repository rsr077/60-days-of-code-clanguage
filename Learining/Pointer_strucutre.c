#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};
int main(){
    int a =45;
    struct employee Rajeev={34,5.2,"Rajeev"};
    struct employee *ptr =&Rajeev;

    printf("The name of the Rajeev is %s\n",Rajeev.name);
    printf("The salary of the Rajeev  is %d\n",Rajeev.salary);
    printf("The hike of the Rajeev is %f\n",Rajeev.hike);

    printf("The name of the Rajeev is %s\n",(*ptr ).name);
    printf("The salary of the Rajeev  is %d\n",(*ptr ).salary);
    printf("The hike of the Rajeev is %f\n",(*ptr ).hike);

}