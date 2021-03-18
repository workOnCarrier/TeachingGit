#include<iostream>
#include<queue>
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
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void leftview(Node* root){
    if (root==NULL){
        return;
    }
    else if(root->left==NULL && root->right==NULL){cout<<root->data<<" ";}
    else{
        queue <Node*> Q;
        Q.push(root);
        Q.push(NULL);
        cout<<root->data<<" ";
        while(!Q.empty()){
            Node* current = Q.front();
            if(current!=NULL)
            {  
                if(current->left!=NULL){Q.push(current->left);}
                if(current->right!=NULL){Q.push(current->right);}
            }
            Q.pop();
            if(current==NULL && Q.size()!=0)// This means we hav reached end of a level
            // Remember while popping Size shall not be zero otherwise queue will become empty
            {
                cout<<Q.front()->data<<" ";
                Q.push(NULL);
            }
            
        }
    }
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
    cout<<endl;

    cout<<"Left View: \n";
    leftview(root);
    


    
    return 0;
}