#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void insertAtFirst(struct Node** head ,int value){
    struct Node* newNode =(struct Node*)malloc(sizeof(struct Node)){
        newNode->data = value;
        newNode->next = *head;
        *head = newNode;
    }
}
void insertAtLast(struct Node** head, int value){
    struct Node* newNode =(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;

    if(*head== NULL){
        *head =newNode;
        return;
    }

    struct Node* temp= *head;
    while(temp->next!= NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void display(struct Node* head){
    struct Node* temp= head;
    while (temp!=NULL)
    {
        printf("%d -> ", temp->data);
        temp=temp->next;
    }
    printf("NULL");
    
}

int main(){
    struct Node* head=NULL;
    insertAtLast(&head, 10);
    insertAtLast(&head, 20);
    insertAtLast(&head, 30);
    display(head);
}