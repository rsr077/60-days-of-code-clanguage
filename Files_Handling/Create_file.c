#include<stdio.h>
#include<stdlib.h>

int main(){
    // file pointer
    FILE* fptr;
    // creating file using fopen() acces mode 'w'
    fptr =fopen("file.txt","w");
    // checking if the file is created 
    if (fptr == NULL){
        printf("The file is not opened . the program will ""exit now");
        exit(0);

    }
    else {
        printf("Teh file is created suceessfull.");
    }
    return 0;

}