#include<stdio.h>
#include<stdlib.h> 
int main(){
    FILE *fptr;
    char filename[100],c;
    printf("Enter teh filename to open\n");
    scanf("%s",filename);
    // open file
    fptr =fopen(filename,"r");
    if(fptr == NULL)
    {
        printf("Cannot open file\n");
        exit(0);
    }
    // Read contents from file 
    c=fgetc(fptr);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(fptr);
    }
    fclose(fptr);
    return 0;

}