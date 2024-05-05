#include<stdio.h>
#include<string.h>

int main(){
    // Declare the file pointer 
    FILE* filePointer;
    char dataToBeWritten[50]="Github ""Pull Request";
    // Using fopen()
    filePointer = fopen ("Github.c","w");
    // Check if thid filePonier is null
    if (filePointer == NULL){
        printf("Github.c file failed to open.");
    }
        else 
        {
            printf("The file is now opened.\n");
            // writing in the file using fputs()
            if(strlen(dataToBeWritten)>0)
            {
            fputs(dataToBeWritten,filePointer);
            fputs("\n",filePointer);

        }
        // closing the file sing fclode()
        printf("Data sucussfully written in file""Github.c\n");

        printf("The file is now closed.");
}
 
return 0;
}