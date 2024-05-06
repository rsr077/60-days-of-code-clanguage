#include<stdio.h>
int main(){
    FILE *ptr;
    ptr =fopen("Samplefile.txt","r");
    //char ch;
    //fscanf(ptr,"%c",&ch);
    //printf("The character ch is %c",ch);
    int i;
    fscanf(ptr,"%d",&i);
    printf("The value of i is %d",i);
    
    return 0;
}
