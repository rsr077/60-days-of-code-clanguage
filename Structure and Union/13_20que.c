#include<stdio.h>
int main(){
    int j;
    typedef struct
    {
        char first[20];
        char middle[20];
        char last [15];
        char city [15];
        int pincode;
    }name;
    name person[2];
    for (j=0;j<2;j++)
    {
 printf("\n Record No.:%d",j+1);
 printf("\nFirst Name:");
 scanf("%s",person[j].first);
 printf("Middle Name:");
 scanf("%s",person[j].middle);
 printf("Last Name:");
 scanf("%s",person[j].last);
 printf("City &Pincode");
 scanf("%s %d",person[j].city,&person[j].pincode);
    }
    for (j=0;j<2;j++)
    {
        printf("\n \n First Name :%s",person[j].first);
         printf("\n \n Middle Name :%s",person[j].middle);
          printf("\n \n Last Name :%s",person[j].last);
        printf("\n City &Pincode:%s-%d",person[j].city,person[j].pincode);  

    }
    
    
}