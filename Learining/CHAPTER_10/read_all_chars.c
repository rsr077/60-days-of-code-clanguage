#include<stdio.h>
int main(){
    FILE *ptr;
  
    int i=89;
  
  ptr =fopen("fgetcputc.txt","r");
  char ch;
while(ch!=EOF){
    ch = fgetc(ptr);
    if(ch!=EOF)

  printf("The value of ch is %c\n",ch);
 
}
// ch = fgetc(ptr);
 // printf("The value of ch is %c",ch);
 // ch = fgetc(ptr);
 // printf("The value of ch is %c",ch);
  
    fclose(ptr);
    return 0 ;
}