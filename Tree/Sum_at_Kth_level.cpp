#include<iostream>
#include<queue>
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

int printLevelK(Node* root, int k){
    if(root==NULL) return -1;
    queue <Node*>  Q;
    Q.push(root);
    Q.push(NULL);
    int sum = 0;
    int level = 0;
    
    while(!Q.empty()){
        Node* node = Q.front();
        Q.pop();
        if(node!=NULL){
            if(level == k) sum += node->data;
            if(node->left!=NULL) Q.push(node->left);
            if(node->right!=NULL) Q.push(node->right);
        }
        else if(!Q.empty()){
            Q.push(NULL);
            level ++;
        }
    }
    return sum;
}



int main(){
    Node*root = new Node(15);
    root->left = new Node(18);
    root->right = new Node(21);
    root->left->left = new Node(10);
    root->left->right = new Node(19);
    root->right->right = new Node(27);
    root->right->left = new Node(26);

    cout<<printLevelK(root,2)<<endl;

    return 0;
}