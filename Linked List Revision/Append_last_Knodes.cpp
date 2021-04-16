#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
int Length(Node * head){
    Node * temp = head;
    int l = 1;
    while(temp->next!=NULL){
        temp = temp->next;
        l++;
    }
    return l;
}
Node* kappend(Node * &head,int k){
    Node * temp = head;
    Node* newTail;
    Node* newHead;
    int count = 1;
    int LLlength = Length(head);
    while(temp->next!=NULL){
        if(count == LLlength-k ){
            newTail=temp;
        }
        if(count==LLlength-k+1){
            newHead = temp;
        }
        temp = temp->next;
        count++;
    }
    newTail->next = NULL;
    temp->next = head;

    return newHead;
}

Node* InsertAtTail(Node*&head,int val){
    Node * n = new Node(val);
    if(head == NULL){
        head = n;
        return  head;
    }
    Node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    return head;
}
void PrintLL(Node * head){
    Node * temp = head;
    if(head == NULL) {cout<<"Empty List\n"; return;}
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}

int main(){
    Node * head = NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    PrintLL(head);
    int n = 8;
    cout<<Length(head)<<endl;
    Node* newhead = kappend(head,3);
    PrintLL(newhead);
    return 0;
}