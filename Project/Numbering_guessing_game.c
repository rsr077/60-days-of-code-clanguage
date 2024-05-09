#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nGuesses=1;
    srand(time(0));
    number=rand()%10000000000000+1;

    do
    {
        printf("Guess the nuber between 1to 100\n");
        scanf("%d",&guess);
        if(guess<number){
            printf("Lower number please");
        }
        else if(guess<number){
            printf("Greater nuber please");
        }
        else{
            printf("Yayy you got it!\n You took%d attempts",nGuesses);
        }
        nGuesses++;

    }while(guess!=number);
    return 0;
   
    
   
}