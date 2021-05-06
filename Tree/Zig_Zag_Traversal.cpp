<<<<<<< HEAD
#include<bits/stdc++.h>
=======
#include<iostream>
#include<stack>
>>>>>>> 8a60745494b4f5116f417c2e9090b803fd0093bb
using namespace std;

struct Node{
    int data;
<<<<<<< HEAD
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
=======
    Node * left, *right;

    Node(int val){
        data= val;
        left = right = NULL;
    }
};

void ZigZag(Node*root){
    if(root==NULL) return;

    bool lefttoright = true;
    stack<Node*>currLevel;
    stack<Node*>nextLevel;

    currLevel.push(root);
    while(!currLevel.empty()){
        Node* temp = currLevel.top();
        currLevel.pop();
        if(temp){
            cout<<temp->data<<" ";
        
        
            if(lefttoright){
                if(temp->left!=NULL){
                nextLevel.push(temp->left);
                }
                if(temp->right!=NULL){
                    nextLevel.push(temp->right);
                }
            }
            else{
                if(temp->right!=NULL){
                    nextLevel.push(temp->right);
                }
                if(temp->left!=NULL){
                    nextLevel.push(temp->left);
                }
            }

        }   
        if(currLevel.empty()){
            lefttoright = !lefttoright;
            swap(currLevel,nextLevel);
        } 
    }
}

int main(){
    /*          
                12
               /  \
              9    15
             / \
            5   10    



    */
    Node*root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);

    ZigZag(root);
    cout<<endl;   



   return 0;
}
>>>>>>> 8a60745494b4f5116f417c2e9090b803fd0093bb
