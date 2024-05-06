#include<stdio.h>

struct twoDimVector
{
    int x;
    int y;
};
int main(){
    struct twoDimVector V1={1,4};
    struct twoDimVector V2={11,45};
    printf("%di +%dj\n",V1.x,V1.y);
    printf("%dl+%dp\n",V2.x,V2.y);
    return 0;
}