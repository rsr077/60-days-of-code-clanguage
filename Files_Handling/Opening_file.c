#include<stdio.h>
#include<stdlib.h>
int main(){
// fopen
FILE*fptr;
// opening the file in read mode
fptr = fopen("filename.txt","r");
// checking if the file is opened successsfuly 
if(fptr == NULL){
    printf("The file is not opened.Teh program will""now exit.");
    exit(0);
}
}