#include<stdio.h>
#include<string.h>

int main(){
    char str1[]="Github",
         str2[]="gIrhub",
         str3[]="Geeks";

         int result;
         // Commparing string str1
         // and str2
         result=strcump(str1,str2);
         printf("strcmp(str1,str2)=%d\n",result);
         result=strcmp(str1,str3);
         // Comparing strings str1 and str3
         printf("strcmp(str1,str3)=%d\n",result);
         return 0;




}