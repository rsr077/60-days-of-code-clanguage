#include<stdio.h>
#include<stdlib.h>
typedef struct ToDo todo;

struct ToDo {
    char data [100];
    todo *link;
    int count;
};
todo *start =NULL;
int main(){
    int choice;
    WelcomeUser();
    while(1){
        system("color 3F");
        system("cls");
        printf("\n1.see Yout Todo list");
        printf("\n2.see Yout Todo ");
        printf("\n3.see Yout Todo ");
        printf("\n4.see Yout Todo ");
        printf("\n5.Exit");
        printf("\n\nEnter your choice..");
        scanf("%d",&choice);
        switch (choice){
            case 1:
            seeToDo();
            break;
              case 2:
            seeToDo();
            break;
              case 3:
            seeToDo();
            break;
              case 4:
            seeToDo();
            break;
              case 5:
            exit(0);
        }
        
    }
}
void Welcomeuser(){
    system("color 4F");
    printf("\n\n \n\n\n");
    printf("\t _____________________________________________________");
    printf("\t ###############################YOUR TODO LIST APP####################");
    printf("\t-----------------------------------------------");
    printf("\n\n\n\t\t********************************WELCOME*************");
    system("Pause");
}
void seeTODo(){
    system("cls");
    todo*temp;
    temp=start;
    if(start ==NULL){
        printf("\nEmpty ToDo\n\n");

    }
    while(temp!=NULL){
        printf("\nEmpty ToDo\n\n");
    }
    while(temp=!NULL){
        printf("%d)",temp->count);
        puts(temp->data);
        fflush(stdin);
        temp=temp->link;
    }
    printf("\n \n \n");
    system("Pause");
}
void createToDo(){
    char k;
    todo*t,*temp;
    system("cls");
    while(1){
        printf("\n Eant to add?y\n");
        fflush(stdin);
        scanf("%c",&k);
        if(k=='n')
        break;
        else{
            if(start==NULL){
                t=(todo *)calloc(1,sizeof(todo));
                start=t;
                printf("\nAdd it..\n");
                fflush(stdin);
                gets(t->data);
                t->count=1;
                start->link=NULL;

            }
            else{
                temp=(todo *)calloc(1,sizeof(todo));
                printf("\nADD it..\n");
                fflush(stdin);
                gets(temp->data);
                temp->link=NULL;
                t->link=temp;
                t=t->link;
            }
            fixcount();
        }
    }
    
}
void delToDo(){
    system("cls");
    int d;
    todo *temp1 ,*temp;
    printf("\n Enter the no of the todo you want to remove\n");
    scanf("%d",&d);
    temp1=start;
    temp=start->link;
    while(1){
        if(temp1->count==d){
            start=start->link;
        
    free(temp1);
    fixcount();
    break;
        }

if(temp->count==d){
    temp1->link=temp->link;
    free(temp);
    fixcount();
    break;
}
else{
    temp1=temp;
    temp=temp->link;
}

    }
    sytem("pause");
}
void fixcount(){

}
void updateToDo(){
    system("cls");
    todo*temp, *t;
    char k;
    while(1){
        printf("\n Wnat to add ?y\n");
        fflush (stdin);
        scanf("%c",&k);
        if(k=='n')
        break;
        printf("\nAddit..\n");
        temp=(todo *)calloc(1,sizeof(todo));
        fflush(stdin);
        gets(temp->data);
        temp->link=NULL;
        t=start;
        while(t->link!=NULL){
            t=t->link;
        }
        t->link=temp;
        fixcount();
    }
    printf("\n\n");
    system("Pause");

}