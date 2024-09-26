#include<iostream>
#include<queue>
#include<vector>
#include<map>
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
vector<int> findTopView(Node* root){
    vector<int> ans;
    if (root == NULL){
        return ans;
    }
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    map<int, int> mpp;
    while(!q.empty()){
        auto it = q.front();
        q.pop();

        Node* temp = it.first;
        int line = it.second;

        if(mpp.find(line) == mpp.end()){  //for top view
            mpp[line] = temp->data;
        }
        // mpp[line] = temp->data; //for bottom view

        if(temp->left != NULL){
            q.push({temp->left, line-1});
        }
        if(temp->right != NULL){
            q.push({temp->right, line+1});
        }
    }
    for (auto it: mpp){
        ans.push_back(it.second);
    }
    return ans;
}
void findSideView(Node* root, int level, vector<int> &ans){
    if (root == NULL){
        return;
    }
    if(ans.size() == level){
        ans.push_back(root->data);
    }
    //for right most view
    findSideView(root->right, level+1, ans);
    findSideView(root->left, level+1, ans);
    
    //for left most view
    // findSideView(root->left, level+1, ans);
    // findSideView(root->right, level+1, ans);
}
int main(){
    Node* root = NULL;
    buildTree(root);  //1 2 3 4 5 -1 7 -1 -1 6 -1 -1 -1 -1 -1 
    levelOrderTraversal(root);cout<<endl;
    vector<int> topView = findTopView(root);
    for(auto it: topView){
        cout<< it <<" ";
    }cout<<endl;
    vector<int> rightView;
    findSideView(root, 0, rightView);
    for(auto it: rightView){
        cout<< it <<" ";
    }cout<<endl;
    return 0;
}