#include<stdio.h>
int main(){
    typedef struct
    {
        char name[20];
        char sex [2];
        int acno  [3];
    }info;
    info;
    info empolyee={"Sanjay","M",111};
    printf("\n Name\t sex \t A/c No.\n");
    printf("%s \t",empolyee .name);
    printf("%s \t",empolyee.sex);
    printf("\n",empolyee.acno);
}