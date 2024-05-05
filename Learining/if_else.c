#include<stdio.h>
void main(){
    int s,d;
    printf("\n Enter a Number:");
    scanf("%d",&s);
    d=s%10;
    if(d==5)


{
    s=s/10;
    printf("\nSquare =%d%d",s*s++,d*d);
}
else
printf("\n Invalid Number");

}
