#include<stdio.h>
void printNubers(){
    int n=1;
    label:
    printf("%d",n);
    n++;
    if(n<=10) goto label;
}
int main(){
    printNubers();
    return 0;

}