#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void deleteAtHead(Node* &head){
    Node *Temp = head;
    while (Temp->next != head)
    {
        Temp = Temp->next;
    }

    Node *toD = head;
    Temp->next = head->next;
    head = head->next;

    delete toD;
}
void deletion(Node *&head, int pos)
{

    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt != (pos - 1))
    {
        temp = temp->next;
        cnt++;
    }

    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}
void insertAtTail(Node *&head, int val)
{

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    newNode->next = head;
    temp->next = newNode;
}
void display(Node *head)
{
    Node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp!= head);
    cout << endl;
}
int main()
{
    Node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);

    insertAtHead(head, 9);
    display(head);

    deletion(head, 3);
    display(head);

    deleteAtHead(head);
    display(head);

    return 0;
}