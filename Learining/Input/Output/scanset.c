#include<stdio.h>

int main(void){
    char str[124];
    printf("Enter a string:");
    scanf("%[^\n]s",str);
    //scanf("%[A-Z]s",str);
    printf("you enterd :%s\n",str);
    return 0;
}