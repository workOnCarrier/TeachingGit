#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node * left, *right;

    Node(int val){
        data= val;
        left = right = NULL;
    }
};

void ZigZag(Node*root){
    if(root==NULL) return;

    bool lefttoright = true;
    stack<Node*>currLevel;
    stack<Node*>nextLevel;

    currLevel.push(root);
    while(!currLevel.empty()){
        Node* temp = currLevel.top();
        currLevel.pop();
        if(temp){
            cout<<temp->data<<" ";
        
        
            if(lefttoright){
                if(temp->left!=NULL){
                nextLevel.push(temp->left);
                }
                if(temp->right!=NULL){
                    nextLevel.push(temp->right);
                }
            }
            else{
                if(temp->right!=NULL){
                    nextLevel.push(temp->right);
                }
                if(temp->left!=NULL){
                    nextLevel.push(temp->left);
                }
            }

        }   
        if(currLevel.empty()){
            lefttoright = !lefttoright;
            swap(currLevel,nextLevel);
        } 
    }
}

int main(){
    /*          
                12
               /  \
              9    15
             / \
            5   10    



    */
    Node*root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);

    ZigZag(root);
    cout<<endl;   



   return 0;
}
