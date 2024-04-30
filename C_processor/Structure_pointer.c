#include<stdio.h>

struct point {
    int x,y;
};
int main(){
    struct point str ={1,2};
    // p2 is a poniter to structure p1
    struct point* ptr=&str;

    // Accessing structure members using structure pointer
    printf("%d %d", ptr->x,ptr->y);

    return 0;
}