#include<stdio.h>
void check(int number)
{
    printf("Before try\n");
    // try
    if(number<0){
        // throw
        goto catching;
        printf("After throw(Never executed)\n");
    }
    // catch
    catching:{
        printf("Exception caught\n");

    }
    printf("After catch(will be executed)\n");
    return ;

}
int main(){
    int x=-1;
    check(x);
    return 0;
}
