#include<iostream>
#include<queue>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* insertIntoBST(Node* &root, int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d > root->data){
        root->right = insertIntoBST(root->right, d);
    } else if (d < root->data) {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}
// void takeInput(Node* &root){
//     int data;
//     cin>>data;

//     while(data != -1){
//         insertIntoBST(root, data);
//         cin>>data;
//     }
// }
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
// bool searchInBST(Node* root, int x){
//     if(root == NULL){
//         return false;
//     }
//     if(root->data == x){
//         return true;
//     }
//     if(root->data > x){
//         return searchInBST(root->left, x);
//     } else {
//         return searchInBST(root->right, x);
//     }
// }
//using iterative approach
bool searchInBST(Node* root, int x){
    Node* temp = root;
    while(temp != NULL){
        if(temp->data == x){
            return true;
        }
        if(temp->data > x){
            temp = temp->left;
        } else {
            temp = temp->right;
        }
    }
    return false;   
}
int minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}
int maxVal(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp->data;
}
int findCeil(Node* root, int key){
    int ceil = -1;
    while(root){
        if(root->data == key){
            ceil = root->data;
            return ceil;
        }
        if(key > root->data){
            root = root->right;
        } else {
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil;
}
int findFloor(Node* root, int key){
    int floor = -1;
    while(root){
        if(root->data == key){
            floor = root->data;
            return floor;
        }
        if(key > root->data){
            floor = root->data;
            root = root->right;
        } else {
            root = root->left;
        }
    }
    return floor;
}
Node* insertAtRightPosition(Node* root, int key){
    if(root == NULL) return new Node(key);
    Node* curr = root;
    while(root){
        if(curr->data < key){
            if(curr->right != NULL){
                curr = curr->right;
            } else {
                curr->right = new Node(key);
                break;
            }
        } else {
            if(curr->left != NULL){
                curr = curr->left;
            } else {
                curr->left = new Node(key);
                break;
            }
        }
    }
    return root;
}
int main()
{
    Node* root = NULL;
    // cout<<"Enter data to create BST"<<endl;
    // takeInput(root);
    insertIntoBST(root, 30);
    insertIntoBST(root, 20);
    insertIntoBST(root, 40);
    insertIntoBST(root, 70);
    insertIntoBST(root, 60);
    insertIntoBST(root, 80);
    cout<<"Printing the BST:"<<endl;
    levelOrderTraversal(root);cout<<endl;
    int x=40;
    cout<<searchInBST(root, x)<<endl;
    cout<<"Min Value: "<<minVal(root)<<" Max Value: "<<maxVal(root)<<endl;
    cout<<"Ceil: "<<findCeil(root, 56)<<endl;
    cout<<"Floor: "<<findFloor(root, 56)<<endl;

    insertAtRightPosition(root, 23);
    levelOrderTraversal(root);cout<<endl;

    return 0;
}