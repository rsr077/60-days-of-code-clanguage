#include<stdio.h>
#include<process.h>

void main(){
    FILE *f;
    char c;
    f=fopen("io8.c","w");
    if(f==NULL)
    {
        printf("\n Cannot open file");
        exit(1);

    }
    while((c=fgetc(f))!=EOF)
    {
if(ferror(f))
{
    printf("\nCan't read file.");
    fclose(f);
    exit(1);
}
printf("%c",c);
getch();
    }
    fclose(f);
}