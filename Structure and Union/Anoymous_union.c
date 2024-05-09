#include<stdio.h>
struct Scope {
    // Anoymous uion 
    struct {
        char alpha ;
        int num;
    };
};
int main(){
    struct Scope x;
    x.num =65;
    x.alpha ='B';
    // Note that members of union are accessed dircectly
    printf("x.alpha =%c,x.num =%d",x.alpha,x.num);
    return 0;
}