#include<stdio.h>
struct str{
    int mem1;
    char mem2;
};
int main(){
    struct str sr_name ={12};
    union un un_name;
    // accesing union member
    un_name.mem1=9;

    printf("Union Member 1: %d\n",un_name.mem1);
    // accessinf structre Member 
    printf("Structure Member:%d",str_name.mem);
    return 0;

}