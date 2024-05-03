#include<stdio.h>
void main(){
    char ch;
    int f;
    enum ctype{
    
        Letter,Digit,Other
    };
    printf("\n Enter a any charcter");
    ch=getch();
    f=isalpha(ch);
    if(f!=0)
    printf("\n %c is %d type of symbol",ch,Letter);
    else{
        f=isdigit(ch);
        if(f!=0)
        printf("\n %c id %d type of symbol",ch,Digit);
        else
        printf("\n%c is %d type of symbol",ch,Other);
    }
    
}