#include<stdio.h>

int main(){
    int gfg =0;
    printf("Befor if-elses block %d\n",gfg);
    if(1){
        int gfg =100;
        printf("if block %d\n",gfg);

    }
    printf("After if block %d",gfg);
    return 0;
}