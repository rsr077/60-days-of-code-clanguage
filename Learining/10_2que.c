#include<stdio.h>

struct twoDimVector
{
    int x;
    int y;
};



struct twoDimVector sum(struct twoDimVector first,struct twoDimVector second){
    int a,b;
    a=first.x+second.x;
    b=first.y+second.y;
    struct twoDimVector result ={a,b};
    return result;
}

   

int main(){
    struct twoDimVector V1={1,4};
    struct twoDimVector V2={11,45};
    struct twoDimVector V3=sum(V1,V2);
    printf("%di +%dj\n",V3.x,V3.y);
    
    return 0;
}