#include<stdio.h>

int main(){
    FILE* fptr;
    fptr=fopen("file.txt","w+");
    fprintf(fptr,"Github\n");
    // using rewind()
    rewind(fptr);
    char buf[50];
    fscanf(fptr,"%[^\n]s",buf);
    printf("%s",buf);
    return 0;
}