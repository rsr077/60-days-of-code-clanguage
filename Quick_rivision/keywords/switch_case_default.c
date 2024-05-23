#include<stdio.h>

int main(){
    int i=5;
    switch (i)
    {
    case 1:
        printf("case1\n");
        break;
        case 2:
        printf("case2\n");
        break;
    
    default :
    printf("Your case not matche");
        break;
    }
    return 0;
}