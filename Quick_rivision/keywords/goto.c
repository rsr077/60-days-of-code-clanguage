#include<stdio.h>
void printNubers(){
    int n=1;

label:
printf("%d\t",n);
n++;
if(n<=100)goto label;
}

int main(){
    printNubers();
    return 0;
}