#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
    Node(int val){
        data = val;
        next  =NULL;
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


void insertAtNth(Node * &head,int value,int n){
    Node *NewNode = new Node(value);
    if(head == NULL){
        NewNode->next = head;
        head = NewNode;
        return;
    }
    Node* temp = head;
     
    for(int i =0;i<n-2;i++){
        temp = temp->next;
    }
    NewNode->next = temp->next;
    temp->next = NewNode;
}

void Print(Node * head){
    if(head == NULL){
        cout<<"Empty List"<<endl;
        return;
    }    
    Node*temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL\n";
}
int main(){
    Node * head =NULL;
    Print(head);
    InsertatTail(head,13);
    InsertatTail(head,12);
    InsertatTail(head,11);
    InsertatTail(head,10);
    InsertatTail(head,115);
    InsertatTail(head,134);
    InsertatTail(head,19);
    InsertatTail(head,17);

    insertAtNth(head,1,5);
    Print(head);

    return 0;
}