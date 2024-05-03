#include<stdio.h>
struct date {
    unsigned int d;
    unsigned int m;
    unsigned int y;
};
int main(){
    // printing size of structure 
    printf("Size of data os %lu bytes\n",sizeof(struct date));
    struct date dt ={31,12,2024};
    printf("Date is %d %d %d",dt.d,dt.m,dt.y);
}