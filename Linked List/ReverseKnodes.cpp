#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int val){
        data =val;
        next = NULL;
    }
};
node *reversek(node* &head,int k){
    node * currptr = head;
    node* prevptr = NULL;
    node*nextptr;
    int count = 0;
    while(currptr!=NULL&& count<k){
        nextptr = currptr->next;
        currptr->next  = prevptr;

        prevptr= currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next = reversek(nextptr,k);
    }
    return prevptr;
}

void insertAtTail(node* &head,int val){
    node * n = new node(val);
    node* temp = head;
    if(head == NULL){
        head = n;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node*head){
    node *temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp =temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertinBTW(node* &head,int val,int pos){
    node* n = new node(val);
    node * temp = head;
    for(int i=1;i<pos-1;i++){
        temp = temp->next;
    }
    n->next=temp->next->next;
    temp->next=n;
}
void insertathead(node * &head,int val){
    node * n = new node (val);
    n->next = head;
    head = n;
}
void removeathead(node*&head){
    node* todelete=head;
    head = head->next;
    delete todelete;
}
void remove(node*&head,int val){
    node * temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node * todelete=temp->next;
    temp->next = temp->next->next;
    delete todelete;
}


int main(){
    node * head=  NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    
    
    
    int k = 2;
    node*newhead = reversek(head,k);
    display(newhead);
}
