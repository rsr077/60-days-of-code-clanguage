#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Hi X family";
    size_t length =strlen(str);
    printf("String:%s\n",str);
    printf("Length:%zu\n",length);
    return 0;
}