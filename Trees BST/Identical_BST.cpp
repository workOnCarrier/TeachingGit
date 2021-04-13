#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;

    Node(int val){
        data = val;
        left = right =NULL;
    }
};

bool isIdentical(Node* root1, Node* root2){
    if(root1==NULL && root2 ==NULL){
        return true;
    }
    else if (root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left,root2->left);
        bool cond3 = isIdentical(root1->right,root2->right);
        
        if(cond1&&cond2&&cond3){
            return true;
        }
        return false;
    }
}

int main(){
    /*
             15                     15
            /  \                   /  \ 
           10   16                10   18

    */
    
    
    Node * root1 = new Node(15);
    root1->left = new Node(10);
    root1->right = new Node(16);

    Node*root2 = new Node(15); 
    root2->left = new Node(10);
    root2->right = new Node(18);

    if(isIdentical(root1,root2)){
        cout<<"Both are Identical"<<endl;
    }
    else{
        cout<<"Not Identical"<<endl;
    }

    return 0;
}