#include<stdio.h>
int main(){
    struct book1
    {
        char book[30];
        int pages;
        float price;

    };
    struct book1 bk1;
    printf("Enter book name,pages,price:");
    scanf("%s",&bk1.book);
    scanf("%d",&bk1.pages);
    scanf("%f",&bk1.book);
    printf("\n Book name:%s",bk1.book);
    printf("\n Book name:%d",bk1.pages);
    printf("\n Book name:%f",bk1.price);

}