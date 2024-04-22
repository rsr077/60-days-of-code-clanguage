#include<stdio.h>
#include<math.h>
int main(){
double x;
    double result;
    x=2.3;
    result=tan(x);
    printf("tan(%.2lf)=%.2lf\n",x,result);

    x=-2.3;
    result=tan(x);
    printf("tan(%.2lf)=%.2lf\n",x,result);

    x=0;
    result=tan(x);
    printf("tan(%.2lf)=%.2lf\n",x,result);
}