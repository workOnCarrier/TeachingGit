#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

Node* Findmin(Node * root){
    if(root==NULL) return root;
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}

Node* Find(Node* root,int data){
    if (root == NULL) return root;
    if (root->data == data) return root;
    if(root->data > data) return Find(root->left,data);
    if(root->data < data) return Find(root->right,data);
}

Node* GetSuccessor(Node* root, int data){
     Node * current = Find(root,data);
     if(current == NULL) return NULL;

    // case1: node has right Subtree
     if(current->right !=NULL){
         return Findmin(current->right);
     }
     else{
        // case2: No right Subtree
        Node * successor = NULL;
        Node* ancestor = root;
        while(current!=ancestor){
            if(current->data < ancestor->data){
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else{ancestor = ancestor->right;}
        }
        return successor;
    }

}

Node* GetNewNode(int data){
    Node* NewNode = new Node();
    NewNode->data = data;
    NewNode->left = NULL;
    NewNode->right = NULL;
    return NewNode;
}
Node* Insert(Node * root,int data){
    if (root == NULL){
        root = GetNewNode(data);
    }
    else if(data<=root->data){
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    return root;

}

int main(){
    Node* root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);
    
    Node * Successor = GetSuccessor(root,20);
    cout<<Successor->data<<endl;


    return 0;

}
