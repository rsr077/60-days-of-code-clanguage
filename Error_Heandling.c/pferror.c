#include<stdio.h>
int main(){
    FILE* file =fopen("nonexistent_file.txt","r");
    if(file==NULL){
        perror("Error opening file");
        return 1;
    }
    int c;
    while((c=fgetc(file))!=EOF){
        
    }
    if(ferror(file)){
        printf("An error occurred wiel readomg the fiel.\n");
    }
    else{
        printf("File read successfully.\n");

    }
    fclose(file);
    return 0;
}