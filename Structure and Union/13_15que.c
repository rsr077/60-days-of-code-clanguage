/*passing entire structure to function*/
#include<stdio.h>
struct boy
{
char name [25];
int age;
int wt;
};
void main(){
    struct boy b1={"Amit",20,25};
    print(b1);
}
print (struct boy b){
printf("\n %s %d %d",b.name,b.age,b.wt);
return 0;
}