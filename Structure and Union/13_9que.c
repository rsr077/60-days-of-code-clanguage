#include<stdio.h>
void main(){
    struct book
    {
        char name[25];
        char author[25];
        int pages;
    };
    {
    struct book b1={"JAVA COMPLETE REFERENCE","P.NAUGHTON",866};
    struct book *ptr;
    ptr=&b1;
    printf("\n %s by %s of %d pages",b1.name,b1.author,b1.pages);
    printf("\n %s by %s of %d pages",ptr->name,ptr->author,ptr->pages);

}
}