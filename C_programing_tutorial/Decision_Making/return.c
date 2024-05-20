#include<stdio.h>
int SUM(int a,int b)
{
    int s1 =a+b;
    return s1;

}
void print(int s2)
{
    printf("The sum is %d",s2);
    return ;
}
int main(){
    int num1=10;
    int num2=10;
    int sum_of=SUM (num1,num2);
    print(sum_of);
    return 0;
}