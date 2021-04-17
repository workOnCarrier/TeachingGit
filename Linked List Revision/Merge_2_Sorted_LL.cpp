#include<iostream>
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
Node* merge(Node * head1,Node*head2){
    Node*p1 = head1;
    Node*p2 = head2;
    Node* dummyNode = new Node(-1);
    Node* p3 = dummyNode;
    while(p1&&p2){
        if(p1->data<p2->data){
            p3->next = p1;
            p1 = p1->next;
        }
        else{
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while(p1){
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while(p2){
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}

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
int main(){
    Node *head = NULL;
    Node*head2 = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    display(head);

    insertAtTail(head2,9);
    insertAtTail(head2,10);
    insertAtTail(head2,11);

    Node* newList = merge(head,head2);
    display(newList);

    return 0;
}