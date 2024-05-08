#include<stdio.h>
#include<stdlib.h>
int main(int c,char*argv[])
{
    printf("by the time you will compile me I will be""destroyed\n");
    remove(argv[0]);
    return 0;
}
