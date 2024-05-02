#include<stdio.h>
#define PASS 1
#define FAIL 0
#define A  0
#define B   1
#define C    2

void main(){
    struct student{
    char *name;
    unsigned result :  1;
    unsigned grade : 2;
};
struct student v;
   

    v.name="Rajeev";
    v.result =PASS;
    v.grade =C;
    printf("\n Name :%s",v.name);
    printf("\n Result:%d",v.result);
    printf("\n Grade:%d",v.grade);
}
