#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node * right;
};

Node* CreateNode( int data){
        Node * NewNode = new Node;
        NewNode->data = data;
        NewNode->left= NewNode->right = NULL;    
        return NewNode;
}
Node* Mirror(Node*root){
    if(root == NULL) return root;
    
    Node * temp ;
    temp = (root->left);        
    (root->left) = (root->right);
    (root->right) = temp;

    Mirror(root->left);
    Mirror(root->right);
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){
    Node* root = CreateNode(15);
    root->left = CreateNode(10);
    root->left->left = CreateNode(8);
    root->left->right = CreateNode(12);
    root->right = CreateNode(20);
    root->right->right = CreateNode(25);
    cout<<"Original Tree:  \n";
    inorder(root);
    cout<<"Mirror Tree: \n";
    Mirror(root);
    inorder(root);


    
    return 0;
}