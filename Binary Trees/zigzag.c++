#include<iostream>
#include<queue>
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
void buildTree(Node* &root){
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
vector<vector<int>> zigZagTraversal(Node* root){
    vector<vector<int>> ans;
    if(root == NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    bool flag = true;
    while(!q.empty()){
        int size = q.size();
        vector<int> row(size);
        for (int i = 0; i < size; i++){
            Node* temp = q.front();
            q.pop();
            int index = (flag) ? i : size-1-i;
            row[index] = temp->data;

            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
        flag = !flag;
        ans.push_back(row);
    }
    return ans;
}
bool isLeaf(Node* root){
    return !root->left && !root->right;
}
void leftNodeAdd(Node* root, vector<int> &ans){
    Node* curr = root->left;

    while(curr != NULL){
        if(!isLeaf(curr)){    //here we excluded the leaf node from pushing into the ans
            ans.push_back(curr->data);
        }

        if(curr->left != NULL){
            curr = curr->left;
        } else {
            curr = curr->right;
        }
    }
}
void addLeafNode(Node* root, vector<int> &ans){
    if(isLeaf(root)){
        ans.push_back(root->data);
    }

    if (root->left != NULL){
        addLeafNode(root->left, ans);
    }
    if (root->right != NULL){
        addLeafNode(root->right, ans);
    }
}
void rightNodeAdd(Node* root, vector<int> &ans){
    Node* curr = root->right;
    vector<int> temp;
    while(curr != NULL){
        if(!isLeaf(curr)){
            temp.push_back(curr->data);
        }
        if(curr->right != NULL){
            curr = curr->right;
        } else {
            curr = curr->left;
        }
    }
    for (int i = temp.size()-1; i >= 0; i--){
        ans.push_back(temp[i]);
    }
    
}
vector<int> boundaryTraversal(Node* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    if(!isLeaf(root)){
        ans.push_back(root->data);
    }
    leftNodeAdd(root, ans);
    addLeafNode(root, ans);
    rightNodeAdd(root, ans);

    return ans;
}
int main()
{
    Node* root = NULL;
    buildTree(root);
    levelOrderTraversal(root);cout<<endl;
    vector<vector<int>> zz_traverse = zigZagTraversal(root);

    for (int i = 0; i < zz_traverse.size(); i++){
        for (int j = 0; j < zz_traverse[i].size(); j++){
            cout<< zz_traverse[i][j]<<" ";
        }
        
    }cout<<endl;

    vector<int> bd_traversal = boundaryTraversal(root);
    for(auto it: bd_traversal){
        cout<<it<<" ";
    }
    
    return 0;
}