#include<stdio.h>
// Union tempate or declaration
union un {
    int member1;
    char member2;
    float member3;
};
int main(){
    union un var1;
    var1.member1=15;
    printf("The value stroed in member1=%d",var1.member1);
    return 0;
}