#include<stdio.h>
// structure with padding
struct str1{
    char c;
    int i;
};
struct str2{
    char c;
    int i;
}__attribute((packed))__;//using structure packing

int main(){
    printf("Size of str1;%d\n",sizeof(struct str1));
    printf("Size of str2;%d\n",sizeof(struct str2));
    return 0;

}