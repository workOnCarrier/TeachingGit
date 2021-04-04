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

int calcHeight(Node*root){
    if(root==NULL) return 0;

    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->left);
    return max(lheight,rheight)+1;

}

int calcDiamter(Node*root){
    if(root==NULL) return 0;

    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);
    int currDiameter = lheight+rheight+1;

    int lDiamter = calcDiamter(root->left);
    int rDiamter = calcDiamter(root->right);
    return max(currDiameter,max(lDiamter,rDiamter));
}

int main(){
    Node*root = new Node(15);
    root->left = new Node(18);
    root->right = new Node(21);
    root->left->left = new Node(10);
    root->left->right = new Node(19);
    root->right->right = new Node(27);
    root->right->left = new Node(26);

    cout<<calcDiamter(root)<<endl;

    return 0;
}