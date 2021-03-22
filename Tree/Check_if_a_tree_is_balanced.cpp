#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

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
int Height(Node* root){
    if(root==NULL){
        return -1;
    }
    return max(Height(root->left),Height(root->right))+1 ;
}

bool Balancedtree(Node* root){
    if(root == NULL) return true;
    int T1 = Height(root->left);
    int T2 = Height(root->right);
    if(abs(T1-T2<=1) && Balancedtree(root->left) && Balancedtree(root->right)) return true;
    else return false;
}

int main(){
    Node* root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);
    root = Insert(root,9);
    root = Insert(root,6);
    root = Insert(root,7);
    root = Insert(root,5);

    if(Balancedtree(root)== true) cout<<"Balanced \n";
    else cout<<"Not Balanced \n";

    return 0;

}
