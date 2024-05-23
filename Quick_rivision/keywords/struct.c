#include<stdio.h>
#include<string.h>
struct Books {
    char title[50];
    char author[50];
};

int main(){
    struct Books book1;
    // book 1 specification
    strcpy (book1.title,"C++ programming");
    strcpy(book1.author,"bjarne Stroustrup");
    // print book details 
    printf("Book 1 titel :%s\n",book1.title);
    printf("Book 1 author :%s\n",book1.author);
    
    return 0;
}