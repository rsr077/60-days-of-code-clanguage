#include<stdio.h>
#include<stdlib.h>

int main(){
    // pointer 
    FILE* demo;
    int display;
        // Creates a file "demo_file"
        // with file acces as write-plus mode
        demo =fopen("demo_file.txt","r");
        // loop to extract every charcters
        while(1){
            display =fgetc(demo);
            // end of file indicator
            if(feof(demo))
            break;
            printf("%c",display);
        }
        fclose(demo);
        return 0;
}