#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data= val;
        next = NULL;
    }
};
Node * Reversek(Node * &head,int k){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node * prevptr = NULL;
    Node*currptr = head;
    Node*nextptr;
    int count = 0;
    while(currptr!=NULL && count <k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        
        prevptr = currptr;
        currptr = nextptr;

        count++;
    }
    if(nextptr!=NULL){
        head->next = Reversek(nextptr,k);
    }
    return prevptr; 
}
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

void Print(Node * &head){
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
    Print(head);
    int k = 2;
    Node * Reversal = Reversek(head,k);
    Print(Reversal);
    
    return 0;
}