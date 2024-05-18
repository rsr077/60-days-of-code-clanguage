#include<stdio.h>

int main(){
    // Declare string varible
    // as character array 
    char str[50];
    // Input the word
    printf("Enter the word:");
    scanf("%d\n",str);
    // Output the Word 
    printf("\n Entered Word is :%s",str);
    // Input the sentence 
    printf("\n\nEnter the Sentence:");
    scanf("%[^\n]s",str);
    printf("\nEntered Sentence is :%s",str);
    
    return 0;
}