#include<stdio.h>
#include<errno.h>
int main(){
    // If a file is opende which doesnot exist,
    FILE *fp;
    fp =fopen ("Github.txt","r");
    printf("Value of errno:%d\n",errno);
    return 0;

}
