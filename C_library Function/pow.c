#include<math.h>
#include<stdio.h>
int main(){
    double base,power,result;
    base=30.0;
    power=4.0;
    result =pow(base,power);
    printf("%.2f^%.2f=%.2f",base,power,result);
    return 0;
}