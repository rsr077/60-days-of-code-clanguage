#include<stdio.h>
struct str1{
    int a;
    char c;
};
// structure with bit fields
struct str2{
    int a:24;// size of 'a' is 3 bytes =24 bits
    char c;
};
int main(){
    printf("Suze of Str1;%d\nSize of Str:%d",sizeof(struct str1),sizeof(struct str2));
    return 0;
}