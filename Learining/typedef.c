#include<stdio.h>
#include<string.h>

typedef struct employee {
    int salary;
    float hike;
    char name[10];
}emp;
int main(){
   int a=45;
    emp Rajeev={34,5.2,"Rajeev"};
    emp*ptr =&Rajeev;

    printf("The name of the Rajeev is %s\n",Rajeev.name);
    printf("The salary of the Rajeev  is %d\n",Rajeev.salary);
    printf("The hike of the Rajeev is %f\n",Rajeev.hike);

    printf("The name of the Rajeev is %s\n",Rajeev.name);
    printf("The salary of the Rajeev  is %d\n",Rajeev.salary);
    printf("The hike of the Rajeev is %f\n",Rajeev.hike);

}