#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void InsertAtHead(Node* &head,int value){
    Node * temp = new Node(value);
    temp->next = head;
    head = temp;
}

void InsertatTail(Node* &head,int value){
    Node *NewNode = new Node(value);
    if(head == NULL){
        InsertAtHead(head,value);
        return;
    }
    
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = NewNode;
}

void PrintList(Node * head){
    if(head== NULL){
        cout<<"List is Empty\n";
        return;
    }
    Node * temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}
int main(){
    Node* head  = NULL;
    InsertatTail(head,15);
    PrintList(head);
}

