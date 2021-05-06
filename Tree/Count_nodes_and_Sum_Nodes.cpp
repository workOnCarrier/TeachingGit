#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int countNodes(Node* root){
    if(root==NULL) return 0;
    return countNodes(root->left)+countNodes(root->right)+1;
}

int SumNodes(Node*root){
    if(root==NULL) return 0;

    return SumNodes(root->left)+SumNodes(root->right)+root->data;
}


int main(){
    Node*root = new Node(15);
    root->left = new Node(18);
    root->right = new Node(21);
    root->left->left = new Node(10);
    root->left->right = new Node(19);
    root->right->right = new Node(27);
    root->right->left = new Node(26);

    cout<<countNodes(root)<<endl;
    cout<<SumNodes(root)<<endl;
    return 0;
}