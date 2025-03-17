#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void insertAtLast(Node* &head, int value)
{
    Node* newNode =new Node(value);
    if(head==NULL)
    {
        head=newNode;
        return;
    }

    Node* temp=head;
    while(temp->next!= NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertAtFirst(Node* &head, int val)
{
    Node* newNode= new Node(val);
    newNode->next=head;
    head =newNode;
}

void searchElement(Node* head,int key)
{
    Node* temp=head;
    int p=0;
    while(temp!=NULL)
    {

        if(temp->data==key)
        {
            cout<<"the element "<<key<<" found at position "<<p<<endl;
            return;
        }
        p++;
        temp=temp->next;
    }
    cout<<"the element "<<key<<" Not found"<<endl;
}

void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node* head =NULL;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    display(head);

    insertAtFirst(head,8);
    display(head);

    searchElement(head,3);
    searchElement(head,5);

    return 0;
}
