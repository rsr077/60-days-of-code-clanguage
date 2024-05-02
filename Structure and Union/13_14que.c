/*pssing structure elements to function*/

#include<stdio.h>
void main(){
    struct boy
    {
        char name[25];
        int age;
        int wt;
    };
    struct boy b1={"Amit20 25"};
    printf(b1.name,b1.age,b1.wt);
}
print(char *s,int t,int n)
{
    printf("\n %s %d %d",s,t,n);
    return 0;
}


