#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
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

bool BinarySearch(Node*root, int key){
    if (root == NULL){
        return false;
    }
    
    else if(root->data == key ){
        return true;
    }
    else if(root->data>key){
        return BinarySearch(root->left,key);
    }
    else if(key>root->data){
        return BinarySearch(root->right,key);
    }
}


int main(){
    Node* root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);

    if (BinarySearch(root,10)== true){
        cout<<"Found It \n";
    }
    else{
        cout<<"The key Doesnt Exist \n";
    }
    return 0;

}



// DISCLAIMER : USE IF AND ELSE IF CONDITOIN VERY CAREFULLY. 
// IT WILL NOT GIVE ANY COMPILE TIME AND RUNTIME ERROR
// BUT WILL DISRUPT YOUR OUTPUT 