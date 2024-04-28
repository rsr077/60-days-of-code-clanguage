

int main(){
    struct book1
    {
        char book[30];
        int pages;
        float price;
    };
    struct book1 bk1;
    printf("\n Size of Structure Elements");
    printf("\n Book: %d",sizeof(bk1.book));
    printf("\n Pages: %d",sizeof(bk1.pages));
    printf("\n price: %d",sizeof(bk1.price));
    printf("\n Tota; Bytes: %d",sizeof(bk1));
}