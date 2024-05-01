#include<stdio.h>
#include<string.h>
void main(){
    struct boy 
    {
        char *name;
        int *age;
        float *height;
    };
    struct boy b;
    char nm[10]="somesh";
    int ag=20;
    float ht=5.40;
    strcpy(b.name,nm);
    b.age=&ag;
    b.height =&ht;
    printf("\n Name =%s",*b.name);
    printf("\n Age =%d", *b.age);
    printf("\n Height =%g",*b.height);
}