#include<iostream>
#include<climits>
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

// bool BinarySearch(Node*root, int key){
//     if (root == NULL){
//         return false;
//     }
    
//     else if(root->data == key ){
//         return true;
//     }
//     else if(root->data>key){
//         return BinarySearch(root->left,key);
//     }
//     else if(key>root->data){
//         return BinarySearch(root->right,key);
//     }
// }
Node* FindMin(Node* root){
    while(root->left!=NULL) FindMin(root->left);
    return root;
};
Node* DeleteNode(Node*root , int data){
    if(root == NULL) return root;
    else if(data < root->data) root->left = DeleteNode(root->left,data);
    else if(data > root->data) root->right = DeleteNode(root->right,data);

    else{
        if(root->left == NULL && root->right == NULL){
                delete root;
                root = NULL;
                return root;
        }
        else if (root->left == NULL){
            Node* temp = root;
            root = root->right;
            delete temp;
            return root;
        }
        else if (root->right == NULL){
            Node* temp = root;
            root = root->left;
            delete temp;
            return root;
        }
        else{
            Node* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = DeleteNode(root->right,temp->data);
        }
    }
}



void InOrder(Node* root){
    if(root == NULL) return;
    
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

int main(){
    Node* root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);
    cout<<"Previously tree was like: ";
    InOrder(root);
    
    cout<<"\nEnter the Number you want to Delete: ";
    int number;
    cin>>number;

    DeleteNode(root,number);
    cout<<"\nAfter Deletion its like: ";
    InOrder(root);

    return 0;

}



// DISCLAIMER : USE IF AND ELSE IF CONDITOIN VERY CAREFULLY. 
// IT WILL NOT GIVE ANY COMPILE TIME AND RUNTIME ERROR
// BUT WILL DISRUPT YOUR OUTPUT 