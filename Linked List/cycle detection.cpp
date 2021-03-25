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

void makecycle(node* &head, int pos){
    node *temp = head;
    node * startnode;
    int count = 1;
    while(temp->next!=NULL){
        if(count == pos){
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

bool detectcycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}
void removecycle(node*&head){
    node*slow = head;
    node*fast = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);
    
    fast = head;
    while(fast->next!=slow->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next=NULL;


}




int main(){
    node * head=  NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    //display(head);
    makecycle(head,3);
    cout<<detectcycle(head)<<endl;

    removecycle(head);
    cout<<detectcycle(head)<<endl;
   
   display(head);
    
}