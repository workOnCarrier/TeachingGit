#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* top = NULL;

void push(int x){
    struct Node* temp = new Node();
    temp->data = x;
    temp->next = top;
    top = temp;
}

void Pop(){
    struct Node*temp;
    if(top==NULL) return;
    temp = top;
    top = top->next;
    free(temp);
}
