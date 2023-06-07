//program in c to illustrtee singly linked lists and also to traverse through them
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;

};
int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=22;
    head->link=NULL;
     
    struct node *current=malloc(sizeof(struct node));
    current->data=34;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=15;
    current->link=NULL;
    head->link->link=current;
system("cls");
    return 0;
}
