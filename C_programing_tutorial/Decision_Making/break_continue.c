#include<stdio.h>

int main(){
    printf("The loop with break produces outputas:\n");
    for(int i=1;i<=7;i++){
        if(i==3)
        break;
        else
       
            printf("%d",i);
        
    }
    printf("\n the loopwith continue produces output as :\n");
    for(int i=1;i<7;i++){
        if(i==3)
        continue;
        printf("%d",i);

    }
    return 0;
}