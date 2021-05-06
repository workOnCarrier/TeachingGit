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

void inorder(Node*root){
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void Sum_replacement(Node*root){
    if(root==NULL) return;

    Sum_replacement(root->left);
    Sum_replacement(root->right);

    if(root->left!=NULL) root->data+=root->left->data;
    if(root->right!=NULL)root->data+=root->right->data;
}
// Another Approach but this only gives answer of root
int Sum_tree(Node* root){
    if(root==NULL ) return 0;
    if(root->left==NULL && root->right==NULL) return root->data;
    return Sum_tree(root->left)+Sum_tree(root->right)+root->data;
}



int main(){
    Node*root = new Node(15);
    root->left = new Node(18);
    root->right = new Node(21);
    root->left->left = new Node(10);
    root->left->right = new Node(19);
    root->right->right = new Node(27);
    root->right->left = new Node(26);
    cout<<"Normal Tree: ";
    inorder(root);
    Sum_replacement(root);
    cout<<"\nSum Tree: ";
    inorder(root);
    cout<<endl;

    return 0;
}

// Time Complexity :- O(N)