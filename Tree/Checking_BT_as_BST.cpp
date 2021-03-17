#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

// bool IsSubtreeLesser(Node*root,int value){
//     if (root == NULL){ 
//         return true;
//     }
//     if (root->data<=value
//         && IsSubtreeLesser(root->left,value)
//         && IsSubtreeLesser(root->right,value)){
//             return true;
//         }
//     else { 
//         return false;
//     }
// }

// bool IsSubtreeGreater(Node*root,int value){
//     if (root == NULL) {
//         return true;
//     }
//     if(root->data> value
//         && IsSubtreeGreater(root->left,value)
//         && IsSubtreeGreater(root->right,value)) {
//             return true;
//         }
//     else {
//         return false;
//     }
// }


// bool IsBinarySearchTree(Node*root){
//     if(root == NULL) {
//         return true;
//     }
//     if(IsSubtreeLesser(root->left,root->data)
//         && IsSubtreeGreater(root->right,root->data)
//         && IsBinarySearchTree(root->left)
//         && IsBinarySearchTree(root->right)) {
//             return true;
//         }

//     else {
//         return false;
//     }
// }

// More Specific Approach
int IsBSTUtil(Node*root,int minValue,int maxValue){
    if (root == NULL){
        return 1;
    }
    if (root->data > minValue && root->data <maxValue
        && IsBSTUtil(root->left,minValue,root->data)
        && IsBSTUtil(root->right,root->data,maxValue)){
            return 1;
        }
    else{
        return 0;
    }
}
int IsBinarySeachTree(Node*root){
    return IsBSTUtil(root,INT_MIN,INT_MAX);
}

Node* getNewNode(int data){
    Node* NewNode = new Node();
    NewNode->data = data;
    NewNode->left = NewNode->right = NULL;
    return NewNode;
}


Node* Insert(Node*root,int data){
    if (root == NULL){
        root = getNewNode(data);
    }
    if (data<=root->data){
        root->left =  Insert(root->left,data);
    }
    else {
        root->right = Insert(root->right,data);
    }
    return root;
}

int main(){
    Node*root = NULL;
    root = Insert(root,8);
    root = Insert (root,11);
    root = Insert(root,9);
    root = Insert (root,6);
    root = Insert(root,3);
    root = Insert (root,7);
    root = Insert(root,20);
    root = Insert (root,1);
    

    // IsBinarySearchTree(root);

    // if(IsBinarySearchTree(root) == true) {
    //     cout<<"Yes!! Its a Binary Search Tree"<<endl;
    // }
    // else {cout<<"No!! Its Not a BST \n";
    // }
    IsBinarySeachTree(root);
}