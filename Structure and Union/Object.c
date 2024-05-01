#include<stdio.h>
void main(){
    struct disk
    {
        char co[15];
        float type;
        int price;
    };
    struct disk d1={"SONY",1.44,20};
    struct disk d2,d3;

    strucy(d2.co,d1.co);
    d2.type=d1.type;
    d2.price=d1.price;
d3=d2;
printf("\n%s %g %d", d1.type,d1.price);
printf("\n%s %g %d", d2.type,d2.price);
printf("\n%s %g %d", d3.type,d3.price);



}