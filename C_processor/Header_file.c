#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s1[20]="12345";
    char s2[10]="GitHub";
     char s3[10]="ForGitHub";
     long int res;

     // find the value 9^3 using a
     // function in math.h library
     res =pow (9,3);
     printf("Using math.h""The value is :%ld\n",res);

     // Conver a string to long long int 
     // using a function in stdlib.h library
     printf("using stdlib.h,the string");
     printf("to long int :%ld\n");

     // Copy the string s3 int s2 using 
     // Using a function in string.h library

    strcpy (s2,s3);
    printf("Using string.h,the string""s2 and s3:%s%s\n",s2,s3);
    return 0;
     
}