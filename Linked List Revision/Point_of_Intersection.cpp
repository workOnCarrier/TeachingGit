#include<iostream>
using namespace std;
 struct Node{
     int data;
     Node * next;
     Node(int val){
         data= val;
         next = NULL;
     }
 };

void InsertAtTail(Node* &head,int val){
    Node*n = new Node(val);
    if(head==NULL){
        head = n;
        return ;
    }
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    } 
    temp->next = n;
}

void intersect(Node* &head1,Node* &head2,int pos){
    Node * temp1=head1;
    Node* temp2 = head2;
    pos--;
    while(pos--){
        temp1 = temp1->next;
    }
    while(temp2->next){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}
int length(Node*head){
    int l = 0;
    Node *  temp = head;
    while(temp->next){
        temp = temp->next;
        l++;
    }
    return l;
}

int PointOfINtersection(Node* head1,Node*head2){
    Node* p1 ;
    Node* p2 ;
    int d=0;
    int l1 = length(head1);
    int l2 = length(head2);
    if(l1>l2){
        d = l1-l2;
        p1 = head1;
        p2 = head2;
    }
    else{
        d = l2-l1;
        p1 = head2;
        p2 = head1;
    }
    while(d){
        p1 = p1->next;
        if(p1==NULL) return -1;
        d--;
    }
    while(p1 && p2){
        if (p1==p2){
            return p1->data;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    return -1;
}
void display(Node * head){
    if(head == NULL) return;
    Node * temp  = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NuLL"<<endl;
}

int main(){
    Node*head1 =NULL;
    InsertAtTail(head1,10);
    InsertAtTail(head1,20);
    InsertAtTail(head1,30);
    InsertAtTail(head1,40);
    InsertAtTail(head1,5); 
    InsertAtTail(head1,6);
    Node * head2 = NULL;
    InsertAtTail(head2,9);
    InsertAtTail(head2,10);
    intersect(head1,head2,4);
    display(head1);
    display(head2);
    cout<<PointOfINtersection(head1,head2)<<endl;

}