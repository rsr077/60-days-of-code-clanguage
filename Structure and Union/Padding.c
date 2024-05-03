#include<stdio.h>
// char          1 byte
// shor int      2 byte
//int            4byte
//double         8byte


// structure A
typedef struct structa_tag{
    char c;
    short int s;
}structa_t;
// structure B
typedef struct structb_tag {
    short int s;
    char c;
    int i;
}structb_t;
// structure C
typedef struct structc_tag{
    char c;
    double d;
    int s;
}structc_t;
// structure D
typedef struct structd_tag{
    double d;
    int s;
    char c;

}structd_t;
int main(){
    printf("Sizeof(structa_t)=%lu\n",sizeof(structa_t));
    printf("Sizeof(structa_t)=%lu\n",sizeof(structa_t));
    printf("Sizeof(structa_t)=%lu\n",sizeof(structa_t));
    printf("Sizeof(structa_t)=%lu\n",sizeof(structa_t));
}


    


