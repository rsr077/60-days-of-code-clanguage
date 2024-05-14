#include<stdio.h>

int main(){
    int a=5;
    switch (a)
    {
    case 1:
    printf("case is  1");
        break;
        case 2:
        printf("case is 2");
        break;
        case 3:
        printf("case is 3");
    
    default:
    printf("No matched of case");
        break;
    }

    return 0;
}