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
void Even_After_Odd(Node*&head){
    Node * odd = head;
    Node* even = head->next;
    Node* evenstart  = even;
    while(odd->next&&even->next){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;

    }
    odd->next = evenstart;
    if(odd->next==NULL){
        even->next = NULL;
    }
    
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
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        InsertatTail(head,arr[i]);
    }
    PrintList(head);
    Even_After_Odd(head);
    PrintList(head);

    return 0;
}