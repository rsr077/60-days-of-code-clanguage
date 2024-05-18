#include<stdio.h>

int main(){
    int num =123456;
    // printing the num with 10 witdth and getting the 
    // printed characters in char_printed
    printf("Printing num with width 10:");
    int chars_printed =printf("%10d",num);
    printf("\nNumber of charcters printed:%d",chars_printed);
    // specifying with using other method
    printf("\n printing num with width 3:");
    chars_printed =printf("%*d",3,num);
    printf("\nNumber of charcters printed:%d",chars_printed);
    
    return 0;
}