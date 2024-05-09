#include<stdio.h>
#include<process.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char c=' ';
    fp=fopen("data.txt","wb");
    if(fp==NULL);
    {
        printf("Can not open file");
        exit(1);
    }
    printf("\n Write dat &to stop press'.':");
    
    
    while(c!='.'){

        fputc(c,fp);

    }
    fclose(fp);
    fp=fopen("data.dat","rb");
    printf("\nContents read:");
    while(!feof(fp))
    printf("%c",getc(fp));
    return 0;
}