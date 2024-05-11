#include<stdio.h> 
int main(){
    FILE* file=fopen("file.txt","r");
    if(file==NULL){
        perror("Error opening file");
        return 1;
    }
    if(ferror(file)){
        printf("an error occurred while performing file""operations.\n");
    }
    clearerr(file);
    fclose(file);
    return 0;
}