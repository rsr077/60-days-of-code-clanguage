#include<stdio.h>
int main()
{
    FILE* fp =fopen("test .txt","r");
    rewind(fp);
    return 0;
}