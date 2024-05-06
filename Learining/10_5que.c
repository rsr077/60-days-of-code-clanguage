#include<stdio.h>

struct complex
{
    float r;
    float c;

};
int main(){
    struct complex V1={1.1,.4};
    struct complex V2={1.1,4.5};
    printf("%fi +%fj\n",V1.r,V1.c);
     printf("%fi +%fj\n",V2.r,V2.c);
    return 0;
}
