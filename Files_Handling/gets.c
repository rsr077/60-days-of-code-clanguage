#include<stdio.h>
#define MAX 300

int main(){
    // defining buffer
    char buf [MAX];
    printf("Enter a sring:");
    // using gets to take string from stdin

    gets(buf);
    printf("string is :%s\n",buf);
    return 0;
}