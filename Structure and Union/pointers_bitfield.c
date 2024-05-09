#include<stdio.h> 
struct test {
    unsigned int x : 5;
    unsigned int y :5 ;
    unsigned z ; 
};
int main(){
    struct test t;
    // Uncommenting the following line will make
    printf("Address of t.x is %p",&t.x);
    printf("Address of t.z is %p",&t.z);
    return 0;
}