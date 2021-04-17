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

void insertatHead(Node*&head,int val){
    Node* n = new Node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    Node * temp = head;
    while(temp->next!=head){
        temp= temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void insertAtTail(Node* &head , int val){
    
    if(head == NULL){
        insertatHead(head,val);
        return;
    }
    Node * n = new Node(val);
    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void DeleteatHead(Node * &head){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    Node*todelete = temp->next;
    temp->next = head->next;
    head = head->next;
}
void DeleteAtTail(Node * &head,int pos){
    Node * temp = head;
    if(pos ==1){
        DeleteatHead(head);
    }
    int count = 0;
    while(temp->next!=head && count!=pos){
        temp = temp->next;
        count++;
    }
    Node*todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void display(Node * head){
    Node * temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
   cout<<endl;
}

int main(){
    Node * head = NULL;
    int arr[] = {1,2,3,4};
    for(int i=0;i<4;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);
    DeleteatHead(head);
    display(head);
}
