#include<stdio.h>
int main(){
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
    };
    struct t r1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ;
    printf("\n Car No.Starting Time Reaching Time:");
    scanf("%d",&r1.carno);
    scanf("%d %d %d",&r1.st.hour, &r1.st.minute,&r1.st.second);
    scanf("%d %d %d",&r1.st.hour, &r1.st.minute,&r1.st.second);
   // Display Car detail
   printf("\n\tCar No.\t String Time \t Reaching Time\n");
   printf("t%d\t",r1.carno);
   printf("\nt %d:%d:%d\t\t",r1.st.hour,r1.st.minute,r1.st.second);
    printf("\nt %d:%d:%d",r1.st.hour,r1.st.minute,r1.st.second);

    
}                                                                                                                                                                         