#include<stdio.h>
int main(){
    typedef char string[10];
    string a="Hello",b;
    puts("Enter Your Name:");
    gets(b);
    printf("%s %s",a,b);
}