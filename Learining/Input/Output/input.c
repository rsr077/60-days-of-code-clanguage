#include<stdio.h>

int main(){
    int num;
    float f;
    char ch;
    // Input the integer
    printf("Enter the integer:");
    scanf("%d",&num);
    // output the integer
    printf("\n Entered integer is :%d",num);
    // for input Clearinf buffer
    while((getchar()) !='\n');
    // Input the float
printf("\n\nEnter the float:");
scanf("%f",&f);
// output the float
printf("\n Entered float is :%f",f);

// Input the character 
printf("\n\nEnter the character:");
scanf("%c",&ch);
// output the integer
printf("\n Entered character is :%c",ch);
    return 0;
}