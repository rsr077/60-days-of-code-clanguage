#include<stdio.h>
#include<stdlib.h>

int main(){
    // pointer 
    FILE* demo;
        // Creates a file "demo_file"
        // with file acces as write-plus mode
        demo =fopen("demo_file.txt","w+");
        // adds content to the file
        fprintf(demo,"%s %s %s","Welcome","to","Github");
        fclose(demo);
        return 0;
    }
