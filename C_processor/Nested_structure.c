#include<stdio.h>

struct base{
    struct child{
        int i;
    }child;
};
int main(){
    struct base s_name ={12};
    // accesing nested structure member using dot operator
    printf("Nested Structure Variable:%d",s_name.child.i);
    return 0;
}