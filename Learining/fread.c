#include<stdio.h>
#include<stdlib.h>

// a struct to be read and written
struct person {
    int id;
    char fname[20];
    char lname[20];
};
int main(){
    FILE* infile;
    // open file for writing 
    infile = fopen ("Person.bin","wb+");
    if(infile == NULL){
        fprintf(stderr,"\n Error opened file\n");
        exit(1);

    }
    struct  person write_struct ={1,"Rohan","Sharma"};
    // writing to file 
 fwrite (&write_struct,sizeof(write_struct),1,infile);
 struct person read_struct;
 rewind (infile);
 fread (&read_struct,sizeof(read_struct),1,infile);
 printf("Name:%s %s \n ID:%d,read_struct.fname,read_struct.lname,read_strct .id");
 fclose(infile);
 return 0;
}