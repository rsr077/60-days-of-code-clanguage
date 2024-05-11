#include<stdio.h>
int main(){
    FILE* fptr=fopen("filename.txt","r");
    if(fptr==NULL){
        perror("Error opening teh file");
        return 1;
    }
    // perform fie operations
    if(ferror(fptr)){
        perror("Error occured during fiel operations");

    }
    fclose(fptr);
    return 0;
}