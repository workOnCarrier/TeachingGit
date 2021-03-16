#include<iostream>
#include<queue>

using namespace std;
struct Node{
    char data;
    Node*left;
    Node*right;
};

void levelOrder(Node*root){
    if(root == NULL) 
        return;
    queue <Node *> q;
    q.push(root);
    // While there is atleast one dicovered node
    while(!q.empty()){
        Node* current = q.front();
        cout<<current->data<<" "<<endl;
        q.pop(); // Removing Element at the front
        if(current->left != NULL){ 
            q.push(current-> left);}
        if(current->right!= NULL){ 
            q.push(current-> right);}
    }
}
Node* GetNewNode(char data){
    Node* NewNode = new Node();
    NewNode->left = NULL;
    NewNode->right = NULL;
    return NewNode;
}
Node* Insert(Node* root, char data){
    if (root == NULL){
        root = GetNewNode(data); 
    }
    else if (data<= root->data) {Insert(root->left,data);}
    else {Insert(root->right,data);}
    return root;
}
int main(){
    Node*root=NULL;
    root = Insert(root,'M'); root = Insert(root,'B');
    root = Insert(root,'Q'); root = Insert(root,'Z'); 
	root = Insert(root,'A'); root = Insert(root,'C');

    // Print Nodes in Level Order
    levelOrder(root); 
    
    return 0;   
}   