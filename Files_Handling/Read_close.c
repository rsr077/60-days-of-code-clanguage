#include<stdio.h>
#include<string.h>

int main(){
    FILE*filepointer;
    char dataToBeRead[50];
    filepointer =fopen("Github.c","r");
    if(filepointer==NULL){
        printf("Github.c file failed to open.");

    }
    else {
        printf("The file is now opened.\n");
        while (fgets(dataToBeRead,50,filepointer)!=NULL){
            printf("%s",dataToBeRead);
    
        }
        fclose(filepointer);
        printf("Data successfuly read from fiel Github.c\n");
        printf("The file is now close .");

    }
    return 0;
}