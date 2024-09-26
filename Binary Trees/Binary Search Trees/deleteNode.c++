#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
//building BST from level order
Node* LevelOrderBuit(Node* root, int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d > root->data){
        root->right = LevelOrderBuit(root->right, d);
    } 
    if(d < root->data){
        root->left = LevelOrderBuit(root->left, d);
    }
    return root;
}
Node* constructBst(int arr[], int n){
    if(n == 0){
        return NULL;
    }
    Node* root = NULL;
    for (int i = 0; i < n; i++){
        root = LevelOrderBuit(root, arr[i]);
    }
    return root;
}
void inorderTraversal(Node* root){
    if (!root)
        return;
 
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
Node* findRightMostChild(Node* root){
    if(root->right == NULL){
        return root;
    }
    return findRightMostChild(root->right);
}
Node* helper(Node* root){
    if(root->left == NULL){
        return root->right;
    }
    if(root->right == NULL){
        return root->left;
    }
    Node* rightChild = root->right;
    Node* rightMostChild = findRightMostChild(root->left);
    rightMostChild->right = rightChild;
    return root->left;
}

Node* deleteNode(Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return helper(root);
    }
    Node* dummy = root;
    while(root){
        if(root->data > key){
            if(root->left != NULL && root->left->data == key){
                root->left = helper(root->left);
                break;
            } else {
                root = root->left;
            }
        } else {
            if(root->right != NULL && root->right->data == key){
                root->right = helper(root->right);
                break;
            } else {
                root = root->right;
            }
        }
    }
    return dummy;
}

int main()
{
    int arr[] = { 7, 4, 12, 3, 6, 8, 1, 5, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    Node* root = constructBst(arr, n);
    inorderTraversal(root);cout<<endl;
    deleteNode(root, 6);
    inorderTraversal(root);cout<<endl;
    return 0;
}