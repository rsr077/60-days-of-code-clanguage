#include<stdio.h>
int main(){
    FILE *fs;
    int i=0,x,y,c=0,sb=0,b=0;
    fs=fopen("PRG2.C""r");
    if(fs==NULL){
        printf("\n File opening error.");
        exit(1);
    }
    while ((x=fgetc(fs))!EOF)
    {
        switch(x)
        {
            case ';':
            c++;
            break;
            case'{':sb++;
            break;
            case'(':b++;
            break;
            case'#':
            i++;
            break;
            )
            }
    
        }
    }

}