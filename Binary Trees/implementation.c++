#include<iostream>
#include<queue>
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
Node* buildTree(Node* root){   //using recursion
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
void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
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

int main(){
    // //Creating tree manually
    // Node* root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);

    // root->right->left = new Node(6);
    // root->right->right = new Node(7);

    //Creating tree with func
    Node* root = NULL;
    root = buildTree(root);  //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

    preOrderTraversal(root);cout<<endl;
    inOrderTraversal(root);cout<<endl;
    postOrderTraversal(root);cout<<endl;
    levelOrderTraversal(root);cout<<endl;
    
    //Creating tree with level order input
    // 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
    // Node* root = NULL;
    // buildFromLevelOrder(root);
    // levelOrderTraversal(root);

    return 0;
}