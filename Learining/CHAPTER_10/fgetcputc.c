#include<stdio.h>
int main(){
    FILE *ptr;
   // ptr =fopen("fgetcputc.txt","w");
    int i=89;
  // fputc('c',ptr);
  ptr =fopen("fgetcputc.txt","r");
  char ch = fgetc(ptr);
  printf("The value of ch is %c",ch);
  ch = fgetc(ptr);
  printf("The value of ch is %c",ch);
  ch = fgetc(ptr);
  printf("The value of ch is %c",ch);
  
    fclose(ptr);
    return 0 ;
}