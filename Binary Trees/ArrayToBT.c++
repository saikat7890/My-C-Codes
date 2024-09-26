#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;
class Node {
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
// Node* buildTree(vector<int>& nums){
//     if(nums.empty()){
//         return NULL;
//     }
//     Node* root = new Node(nums[0]);
//     queue<Node*> q;
//     q.push(root);
//     int i=1;
//     while(i < nums.size()){
//         Node* temp = q.front();
//         q.pop();
//         if(i < nums.size()){
//             temp->left = new Node(nums[i++]);
//             q.push(temp->left);
//         }
        
//         if(i < nums.size()){
//             temp->right = new Node(nums[i++]);
//             q.push(temp->right);
//         }
//     }
//     return root;
// }
Node* buildTree(vector<int> arr, int i, int size){
    if(i >= size || arr[i]==-1){
        return NULL;
    }
    Node* temp = new Node(arr[i]);
    temp->left = buildTree(arr, 2*i+1, size);
    temp->right = buildTree(arr, 2*i+2, size);
    return temp;
}
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
}
void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
bool isPerfectBinaryTree(vector<int>& arr) { 
    int n = arr.size(); 
    int height = log2(n + 1); // Height of a perfect binary tree with n nodes 
    int expectedNodes = pow(2, height) - 1; // Total number of nodes in a perfect binary tree with given height 
    return n == expectedNodes; 

} 
int countNodes(Node* root) {
    if(root == NULL) return 0;
    int ans = 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        ans+=1;
        q.pop();
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
    return ans;
}
bool isCBT(Node* root, int index, int nodeCount){
    if(root == NULL) return true;
    if(index > nodeCount){
        return false;
    }
    else {
        bool left = isCBT(root->left, 2*index, nodeCount);
        bool right = isCBT(root->right, 2*index+1, nodeCount);
        if(left && right){
            return true;
        } else {
            return false;
        }
    }
}
bool isCompleteTree(Node* root) {
    int nodeCount = countNodes(root);
    int index = 1;
    bool ans = isCBT(root, index, nodeCount);
    return ans;
}

int main()
{
    vector<int> nums = {1,3,5,7,9,11};
    // vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};

    Node* root = buildTree(nums, 0, nums.size());
    levelOrderTraversal(root);cout<<endl;
    inOrderTraversal(root);cout<<endl;

    if (isPerfectBinaryTree(nums)) { 
        cout << "Yes, it is perfect binary tree." << endl; 
    } else { 
        cout << "No, it is not perfect binary tree." << endl; 
    }
    if (isCompleteTree(root)) { 
        cout << "Yes, it is complete binary tree." << endl; 
    } else { 
        cout << "No, it is not complete binary tree." << endl; 
    }
    return 0;
}