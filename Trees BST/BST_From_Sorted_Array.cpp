#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node * printfromArr(int arr[],int start, int end){
    if(start>end){
        return NULL;
    }

    int mid = (start+end)/2;
    Node*root = new Node(arr[mid]);
    root->left = printfromArr(arr,start,mid-1);
    root->right = printfromArr(arr,mid+1,end);

    return root;
}

void printPreorder(Node*root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
} 


int main(){
    int arr[] = {10,20,30,40,50};

    Node*root = printfromArr(arr,0,4);
    printPreorder(root);
    cout<<endl;
    return 0;
}