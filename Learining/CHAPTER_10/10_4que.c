#include<stdio.h>

int main(){
    char name1 [12];
    int salary1;
    char name2 [12];
    int salary2;
    FILE *ptr;
    printf("Enter teh value of salay1\n");
    scanf("%d",&salary1);

     printf("Enter teh value of name1\n");
    scanf("%d",&name1);

     printf("Enter teh value of salay2\n");
    scanf("%d",&salary2);

     printf("Enter teh value of name2\n");
    scanf("%d",&name2);

  //  printf("%d %s",salary,name);

    ptr=fopen("q6.txt","w");
    fprintf(ptr,"%s, %d\n",name1, salary1);
     fprintf(ptr,"%s, %d\n",name2, salary2);
     return 0;
  //  fclose(ptr);





    return 0;
}