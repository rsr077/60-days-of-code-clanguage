// the use of remove() fuction
#include<stdio.h>

int main(){
    if(remove("abc.txt")==0)
    printf("Deleted sucessfully");
    else
    printf("Unable to delete the file");
    return 0;
}