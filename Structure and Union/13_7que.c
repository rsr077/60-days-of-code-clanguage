#include<stdio.h>
int main(){
    int k;
    struct time
    {
        int second;
        int minute;
        int hour;
    };
    struct t
    {
        int carno;
        struct time st;
        struct time rt;
    };{
    struct tt r1[3];
    printf("\n Car No. String Time Reaching Time:\n\n");
    printf("\t hh:mm:ss\n");
    };
    for (k=0;k<3;k++)
    {
        scanf("%d",&r1[k].carno);
        scanf("%d %d %d",&r1[k].st.minute,&r1[k].st.second);
        scanf("%d %d %d",&r1[k].rt.minute,&r1[k].rt.secomd);

    };
    printf("\n \t Car no.\tString Time \t Reaching Time\n");
    for(k=0;k<3;k++){
        printf("\n \t %d \t",r1[k].carno);
        printf("\t %d:%d: %d",r1[k].rt.hour,r1[k].rt.minute,r1[k].rt.second);
    };
       
    
}