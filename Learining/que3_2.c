#include<stdio.h>

int main(){
    int marks1,marks2,marks3;
    printf("Enter markse1\n");
    scanf("%d",&marks1);
      printf("Enter markse2\n");
  scanf("%d",&marks2);
    printf("Enter markse3\n");
  scanf("%d",&marks3);
    float total =(marks1+marks2+marks3)/3;
    if(total>=40){
        if(marks1<33 || marks2<33 || marks3<33){
            printf("sorry you are not passed because your marks in one of the subjcets is less than33");
        }
            else{
                printf("Congratulations you have passed teh exam!");
            }
        }
        else{
            printf("Sorry you are not passed because your marks are less than 40%");
        }

    

    return 0;
}