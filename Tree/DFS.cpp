#include<iostream>
using namespace std;

struct Node
{
    char data;
    Node*left;
    Node*right;
};

void preorder( Node* root){
    if(root== NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node*root){
    if(root== NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node*root){
    if(root== NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* GetNewNode(char data){
    Node* NewNode = new Node();
    NewNode ->data = data;
    NewNode -> left = NULL;
    NewNode -> right = NULL;
    return NewNode;
}

Node* Insert(Node* root, char data){
    if (root == NULL){
        root = GetNewNode(data);
        
    }
    else if (data <= root->data)
    {
        root-> left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    
    return root;
}
int main(){
    Node* root = NULL;
    root = Insert(root,'M');
    root = Insert(root,'B');
    root = Insert(root,'Q');
    root = Insert(root,'Z');
    root = Insert(root,'A');
    root = Insert(root,'C');
    cout<<"preorder Traversals: "<<endl;preorder(root);
    cout<<endl;
    cout<<"inorder Traversals: "<<endl;inorder(root);
    cout<<endl;
    cout<<"postorder Traversals: "<<endl;postorder(root);
    cout<<endl;
       

    return 0;
}