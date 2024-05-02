#include<stdio.h>

void main(){
    int f;
    enum month {Jan =1,Feb,Mar,Apr,May,June,July,Aug,Sep,Oct,Nov,Dec};
    for (f=Jan;f<=Dec;f++)
    switch(f)
    {
        case Jan:
        printf("\n January");
        break;
        case Feb:
        printf("\n February");
        break;
        case Mar:
        printf("\n March");
        break;
        case Apr:
        printf("\n April");
        break;
        case May:
        printf("\n May");
        break;
        case June:
        printf("\n June");
        break;
        case July:
        printf("\n July");
        break;
        case Aug:
        printf("\n August");
        break;
        case Sep:
        printf("\n September");
        break;
        case Oct:
        printf("\n Octber");
        break;
        case Nov:
        printf("\n November");
        break;
        case Dec:
        printf("\n December");
        break;

    }
}