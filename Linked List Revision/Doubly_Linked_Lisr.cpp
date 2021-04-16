#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}

void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void display(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<"NULL"<< endl;
}
void DeleteAthead(Node*head){
    Node* todelete = head;
    head=head->next;
    head->prev = NULL;
    delete(todelete);
}
void DeleteatN(Node* &head,int pos){
    if(pos==1){
        DeleteAthead(head);
    }
    Node* temp = head;
    int count = 1;
    while(temp->next!=NULL &&count!=pos){
        temp =  temp->next;
    }
    temp->prev->next = temp->next;
    if(temp->next) temp->next->prev = temp->prev;

    delete temp;
}


int main()
{
    Node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    display(head);
    insertAtHead(head,8);
    display(head);


    return 0;
}