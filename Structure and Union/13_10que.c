#include<stdio.h>
void main(){
    struct boy
    {
        char *name;
        int *age;
        float *height;
    };
    static struct boy *sp;
    char nm[20]="Mahesh";
    int ag =20;
    float ht =5.40;
    sp->name=nm;
    sp->age= & ag;
    sp->height =&ht;
    printf("\n name =%s",sp->name);
    printf("\n Age =%d",*sp->age);
    printf("\n Height =%f",*sp->height);


}