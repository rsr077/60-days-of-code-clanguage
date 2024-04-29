#include<stdio.h>
#define AREA(l,b)(l*b)
int main(){
    // Given lengths ll and l2
    int ll = 10,l2 =5, area;
    // Find teh area using macros
    area = AREA(ll,l2);

    // print the area
    printf("Area of rectangle""is :%d",area);
    return 0;

}