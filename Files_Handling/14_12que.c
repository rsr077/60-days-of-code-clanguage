#include<stdio.h>
void main(){
    FILE *fp;
    char c;
    fp =fopen("lines.txt","w");
    if(fp==NULL)
    return ;
    else
    {
        while((c=getche()!=' *'))
        fputc(c,fp);

    }
    fclose(fp);
}