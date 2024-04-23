#include<stdio.h>
#include<time.h>
#define Size 256

int main(void)
{
    char buffer(size);
    time_t curtime;
    struct tm*loctime;

    curtime=time(NULL);
    loctime=localtime(&curtime);
    fputs(asctime(loctime),stdout);
    
    strftime(buffer,size,"The time is %I %M %p.\n",loctime);
    fputs(buffer,stdout);
    return 0;
}