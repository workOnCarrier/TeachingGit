#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

};
void makecycle(Node*head,int pos){
    Node*temp = head;
    Node * startNode;
    int count = 1;
    while(temp->next!=NULL){
        if(count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}
void removeCycle(Node*head){
    Node * slow = head;
    Node* fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(fast!=slow);
    fast = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = NULL;
}
bool DetectCycle(Node * head){
    Node *slow = head;
    Node *fast = head;
    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return 1;
        }
    }
    return 0;
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
    makecycle(head,4);
    
    if(DetectCycle(head)) cout<<"Cycle is Present\n";
    else{cout<<"Cycle is not present\n";}

    cout<<"After performing Remove Cycle Command\n";
    removeCycle(head);
    if(DetectCycle(head)) cout<<"Cycle is Present\n";
    else{cout<<"Cycle is not present\n";}
    
    return 0;
}