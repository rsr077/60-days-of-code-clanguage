#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};
void showRef(struct employee *e){
   (*e).name[0]='p';
    printf("The name of the Rajeev is %s\n",e->name);
    printf("The salary of the Rajeev  is %d\n",e->salary);
    printf("The hike of the Rajeev is %f\n",e->hike);
    (*e).hike=4.55;

}

int main(){
   
    struct employee Rajeev={34,5.2,"Rajeev"};
    showRef (&Rajeev);

    printf("The name of the Rajeev is %s\n",Rajeev.name);
    printf("The salary of the Rajeev  is %d\n",Rajeev.salary);
    printf("The hike of the Rajeev is %f\n",Rajeev.hike);
    return 0;
}