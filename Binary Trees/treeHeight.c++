#include<iostream>
#include<queue>
#include <algorithm>
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

void buildFromLevelOrder(Node* &root){
    queue<Node*> q;
    cout<<"Enter data for root: "<<endl;
    int data; cin>>data;
    root = new Node(data);
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter left data for: "<<temp->data<<endl;
        int leftdata; cin>>leftdata;
        if(leftdata != -1){
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter right data for: "<<temp->data<<endl;
        int rightdata; cin>>rightdata;
        if(rightdata != -1){
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
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
int maxDepth(Node* root){
        if(root == NULL){
            return 0;
        }

        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        return 1+max(lh, rh);
    }
bool isBalanced(Node* root) {
    if(root == NULL){
        return true;
    }
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);
    
    if(abs(lh-rh) > 1){
        return false;
    }

    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);

    if(!left || !right){
        return false;
    }
    return true;
}
int longestDiameter(Node* root, int &diameter){
    if(root == NULL){
        return 0;
    }
    int lh = longestDiameter(root->left, diameter);
    int rh = longestDiameter(root->right, diameter);
    diameter = max(diameter, lh+rh);
    return 1+max(lh, rh);
}
int findDiameter(Node* root){
    int diameter = 0;
    longestDiameter(root, diameter);
    return diameter;
}
int findMaxPathSum(Node* root, int &sum){
    if(root == NULL){
        return 0;
    }
    int left = max(0, findMaxPathSum(root->left, sum));
    int right = max(0, findMaxPathSum(root->right, sum));

    sum = max(sum, left+right+root->data);

    return root->data + max(left, right);
}
Node* buildTree(Node* root){
    cout<<"Enter the data: "<<endl;
    int data;cin>>data;
    root = new Node(data);
    //base case
    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting at left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting at right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
bool isIdentical(Node* node1, Node* node2){
    if(node1 == NULL && node2 == NULL){
        return true;
    }
    if(node1 == NULL || node2 == NULL){
        return false;
    }
    return ((node1->data == node2->data) 
            && isIdentical(node1->left, node2->left)
            && isIdentical(node1->right, node2->right));
}
int main(){
    Node* root = NULL;
    buildFromLevelOrder(root);     // 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
    // [3,9,20,-1,-1,15,7]
    levelOrderTraversal(root);cout<<endl;
    cout<<"Height of tree: "<<maxDepth(root)<<endl;
    bool check = isBalanced(root);
    cout<< (check ? "Balanced tree" : "Not balanced tree")<<endl;
    cout<<"Diameter of the tree: "<<findDiameter(root)<<endl;
    int maxPathSum = INT64_MIN; 
    findMaxPathSum(root, maxPathSum);
    cout<<"Maximun path sum of the tree: "<< maxPathSum <<endl;

    Node* tree2 = NULL;
    tree2 = buildTree(tree2); //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    levelOrderTraversal(tree2);cout<<endl;

    cout<<(isIdentical(root, tree2) ? "Two trees are indentical." : "Not identical trees.")<<endl;
    
    return 0;
}