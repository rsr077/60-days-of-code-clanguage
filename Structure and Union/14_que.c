#include<stdio.h>
struct bit 
{
    unsigned int m:4;
    unsigned int x:4;
    int k;
    float f;

};
    struct bit b;

    void main(){
        printf("\n Size of Structure in Bytes =%d",sizeof(b));
    }
