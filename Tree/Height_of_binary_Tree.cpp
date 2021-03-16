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