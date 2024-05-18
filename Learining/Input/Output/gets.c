#include<stdio.h>

int main(){
    char name[50];
    printf("Please enter some texts:");
    gets(name);
    printf("You have entered:%s",name);
    puts(name);
    return 0;
}