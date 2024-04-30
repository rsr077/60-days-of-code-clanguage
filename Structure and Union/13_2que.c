#include<stdio.h>
int main(){
    struct book1
    {
  char book[30];
  int pages;
  float price;
    };
    struct book1 bk1={"c++",300,285};
    printf("\n Book Name: %s",bk1.book);
    printf("\n No of pages:%d",bk1.pages);
    printf("\n Book prince :%f",bk1.price);
}