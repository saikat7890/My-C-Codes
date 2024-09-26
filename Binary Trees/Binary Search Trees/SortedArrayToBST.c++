// Build a BST from an sorted array
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* buildTree(vector<int> v, int start, int end){
    if(start > end){
        return NULL;
    }
    int mid = start + (end-start)/2;
    Node* root = new Node(v[mid]);
    root->left = buildTree(v, start, mid-1);
    root->right = buildTree(v, mid+1, end);
    return root;
}
Node* sortedArrayToBST(vector<int> v){
    if(v.empty()){
        return NULL;
    }
    int start = 0;
    int end = v.size()-1;
    Node* root = buildTree(v, start, end);
    return root;
}
void inorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
int main()
{
    vector<int> v = {-10,-3,0,5,9};
    Node* root = sortedArrayToBST(v);
    inorderTraversal(root);cout<<endl;
    return 0;
}