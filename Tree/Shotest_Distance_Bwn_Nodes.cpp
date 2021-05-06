#include<iostream>
using namespace std;


struct Node{
    int data;
    Node *left,*right;

    Node(int val){
        data = val;
        left = right=NULL;
    }
};

int findDist(Node*root,int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data == k) return dist;

    int Left = findDist(root->left,k,dist+1);
    if(Left != -1){
        return Left;
    }
    return findDist(root->right,k,dist+1); 
}

Node* LCA(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }

    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node* leftLCA = LCA(root->left,n1,n2);
    Node* rightLCA = LCA(root->right,n1,n2);

    if(leftLCA && rightLCA) return root;
    if(leftLCA==NULL && rightLCA==NULL) return NULL;

    if(leftLCA!=NULL) return leftLCA;
    return rightLCA;
}

int DistBtwNodes(Node*root,int n1,int n2){
    Node* lca = LCA(root,n1,n2);
    int d1 = findDist(lca,n1,0);
    int d2 =findDist(lca,n2,0);

    return d1+d2;
}



int main(){
    /*
                1
               / \
              2   3
             /     \
            4       5

    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->right = new Node(3);
    root->right->right = new Node(5);
    
    int n1 = 4;
    int n2 = 5;
    int Shortestdist = DistBtwNodes(root,n1,n2); 
    cout<<"Shortest dist btw Nodes is: "<<Shortestdist<<endl;

    return 0;
}