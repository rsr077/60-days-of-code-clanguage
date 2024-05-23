#include<stdio.h>
union student {
    int age;
    char marks;
}s;

int main(){
    s.age =15;
    s.marks =56;
    printf("age =%d",s.age);
    printf("\nMarkse =%d",s.marks);
    return 0;
}