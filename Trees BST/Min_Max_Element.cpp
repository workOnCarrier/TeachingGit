#include<iostream>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* GetNewNode(int data){
    BstNode* NewNode = new BstNode();
    NewNode->data = data;
    NewNode->left = NULL;
    NewNode->right = NULL;
    return NewNode;
}

BstNode* Insert(BstNode* root, int data){
    if (root == NULL){
        root = GetNewNode(data);
    }
    else if (data<= root->data){
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    return root;
}
// // Iterative Way
// int FindMin(BstNode*root){
//     BstNode* current = root;
//     if (root == NULL){
//         cout<<"Error: Tree is Empty \n";
//     }
//     while(current->left != NULL){
//         current = current->left;
//     }
//     return current->data;
// }

// Recursive Way
int FindMin(BstNode*root){
    if (root == NULL) cout<<" Error: Tree is Empty!! \n";
    else if (root->left == NULL) return root->data;
    return FindMin(root->left);
}

// // Iterative Way
// int FindMax(BstNode*root){
//     BstNode* current = new BstNode();
//     if (root == NULL) cout<<" Error: Tree is Empty!! \n";
//     while(current->right!= NULL){
//         current = current->right;     
//     }
//     return current->data;
// }

// Recursive Way
int FindMax(BstNode* root){
    if (root == NULL) cout<<" Error: Tree is Empty!! \n";
    else if (root->right == NULL) return root->data;
    return FindMax(root->right); 
}

int main(){
    BstNode* root = NULL;
    root = Insert(root , 15);
    root = Insert(root , 10);
    root = Insert(root , 20);
    root = Insert(root , 25);
    root = Insert(root , 8);
    root = Insert(root , 12);

    cout<<FindMin(root)<<endl;
    cout<<FindMax(root)<<endl;


    return 0;
}
