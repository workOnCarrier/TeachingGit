#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

void ZigZagTraversal(Node* root){
    if (root==NULL) return;
    stack<Node*> currentlevel,nextlevel;
    
    currentlevel.push(root);

    bool lefttoright = true;
    while(!currentlevel.empty()){

        Node* temp = currentlevel.top();
        currentlevel.pop();
        
        if(temp!=NULL){
            cout<<temp->data<<" ";
        
            if(lefttoright){
                if(temp->left!=NULL) nextlevel.push(temp->left);
                if(temp->right!=NULL) nextlevel.push(temp->right);
            }
            else{
                if(temp->right!=NULL) nextlevel.push(temp->right);
                if(temp->left!=NULL) nextlevel.push(temp->left);}
        }
        if(currentlevel.empty()){
            lefttoright = !lefttoright;
            swap(currentlevel,nextlevel);
        }
    }
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
    root = Insert(root,2);
    root = Insert(root,1);
    root = Insert(root,3);

    ZigZagTraversal(root);
    
       

    return 0;
}