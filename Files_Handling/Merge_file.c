#include<stdio.h>
#include<stdlib.h>
int main(){
    // Open two files to be merged
    FILE *fp1 =fopen("file1.txt","r");
    FILE *fp2 =fopen("file2.txt","r");
    // Open file to store the result
    FILE *fp3 =fopen("file3.txt","r");
    char c;
    if(fp1==NULL || fp2 == NULL || fp3 == NULL)
    {
        puts("Could not open files");
        exit(0);
    }
}