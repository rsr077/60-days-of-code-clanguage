#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp;
    fp=fopen("filedoesnotexits.txt","rb");
    if(fp==NULL){
printf("value of errno : %d\n",errno);
printf("Error opening the file:%s\n",strerror(errno));
printf("Error printed by perror");
exit(EXIT_FAILURE);
printf("I will not be printed\n");

    }
    else{
        fclose(fp);
        exit(EXIT_SUCCESS);
        printf(" I will not be pritnted\n");
    }
    return 0;
}
