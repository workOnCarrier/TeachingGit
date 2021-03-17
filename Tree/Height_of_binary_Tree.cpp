#include<iostream>
using namespace std;


struct node{
    int data;
    node* left;
    node* right;
};

int FindHeight(node* root){
    if(root == NULL){
        return -1;
    }
    return max(FindHeight(root->left),FindHeight(root->right)) +1 ;
}

node* Insert(node*root,int value){
    if (root == NULL){
        root = new node();
        root->data = value;
        root->left = root->right = NULL;
    }
    else if (value<= root->data){
        root->left = Insert(root->left,value);
    }
    else{
        root->right = Insert(root->right,value);
    }
    return root;
}

int main(){
    node*root =  NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);

    cout<<FindHeight(root)<<endl;;

}