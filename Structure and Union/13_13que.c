#include<stdio.h>
struct book{
    char name[35];
    char author[35];
    int pages;
};
void main(){
    struct book b1={"Jave Complete Reference","P.Naughton,886"};
    show (&b1);
}
    show(struct book *b2)
    {
        printf("\n%s by %s of %d pages",b2->name,b2->author,b2->pages);
    }
