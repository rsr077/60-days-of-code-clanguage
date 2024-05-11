#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(){
    FILE *fp;
    // errno value will be set 
    fp=fopen("GeeksForGeeks.txt","r");
    // opening a fiel which does 
    printf("Value of errno:%d\n",errno);
    perror("Messabe from perror");
    return 0;
}