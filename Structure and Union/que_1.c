#include<stdio.h>

struct test {
    // Unsigned integer membetr x
    unsigned int x;
    // Bit-field member y with 33 bits 
    long int y33;
    // Unsigned integer member 
    unsigned int z;
};
int main (){
    // Declare a variable t of type struct test
    struct test t;
    // Pointer to unsigned int ,pointing to member x
    unsigned int* ptr1 =&t.x;
    // Pointer to unsigned int ,pointing to member z
    unsigned int *ptr2 =&t.z;
    //print the difference between the two poniters
    printf("%d",ptr2-ptr1);
    return 0;

}