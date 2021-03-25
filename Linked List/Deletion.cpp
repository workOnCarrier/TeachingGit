#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node * next;
        node(int val){
            data = val;
            next = NULL;
        }
};


void insertAtTail(node* &head,int val){
    node * n =new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node*temp = head;
    while(temp->next!=NULL){
        temp =temp->next;
    }
    temp->next = n;
}

void display(node * head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp ->next;
    }
    cout<<"NULL"<<endl;
}

//Deletion At head..
void RemoveAtHead(node* &head){
    node*todelete = head;
    head = head->next;
    delete todelete;
}

// Deletion(Everywhere except head)
void Remove(node* &head,int val){
    node*temp = head;
    
    if(head == NULL){
        return;
    }

    if(head->next = NULL){
        RemoveAtHead(head);
        return;
    }
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node * todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}
int main(){
    node*head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    // Remove(head,3);
    // display(head);
    RemoveAtHead(head);
    display(head);
    RemoveAtHead(head);
    display(head);
    return 0;
}