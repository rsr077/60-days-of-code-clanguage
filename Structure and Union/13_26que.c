#include<stdio.h>
#include<string.h>

void main(){
    enum capital 
    {
        Mumbai,Hyderabad,Banglore
    };
    struct state
    {
        char name [15];
        enum capital c;
    };
    struct state s;
    strcpy(s.name,"Andhra Pradesh");
    s.c=Hyderabad;
    printf("\n State :%s",s.name);
    printf("\n Capital: %d",s.c);
    if(s.c==Hyderabad)
    printf("n Hydeabad is Capital of %s",s.name);
}