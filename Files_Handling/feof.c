#include<stdio.h>
int main(){
    // open the file "test.txt"in read mode
    FILE* fp =fopen("test.txt","r");
    // Read the first charcter from the file
    int ch =getc(fp);
    // Loop until the end of the file on scree 
    while (ch!=EOF){
        putchar(ch);
        ch=getc(fp);
    }
    // Cjeck if the end-of-file indicator is 
    if(feof(fp))
    printf("\n End of file reached.");
    else
    printf("\n Something went wrong");
    fclose (fp);
    getchar();
    return 0;
}