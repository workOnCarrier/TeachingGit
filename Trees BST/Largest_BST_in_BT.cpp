#include<iostream>
#include<climits>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

struct Info{
    int size;
    int max;
    int min;
    int ans;
    bool IsBST;
};

Info LargestBSTinBT(Node*root){
    if(root== NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left == NULL && root->right == NULL){
        return {1,root->data,root->data,1,true};
    }
    Info LeftInfo = LargestBSTinBT(root->left);
    Info RightInfo = LargestBSTinBT(root->right);

    Info curr;

    curr.size = (1 + LeftInfo.size + RightInfo.size);
    if(LeftInfo.IsBST && RightInfo.IsBST && root->data > LeftInfo.max && root->data< RightInfo.min){
        curr.min = min(LeftInfo.min,min(RightInfo.min,root->data));
        curr.max = max(RightInfo.max,max(LeftInfo.max,root->data));
        
        curr.ans = curr.size;
        curr.IsBST = true;

        return curr;
    }

    curr.ans = max(LeftInfo.ans,RightInfo.ans);
    curr.IsBST = false;
    return curr;

};

int main(){
    /*
                15
               /  \
              10   30
             /  \
            5    11  
    */
   Node* root = new Node(15);
   root->left = new Node(10);
   root->right = new Node(30);
   root->left->left = new Node(5);
   root->left->right = new Node(11);

   cout<<"Largest Binary Search Tree in a Binary Tree is: "<<LargestBSTinBT(root).ans<<endl;


    return 0;
}