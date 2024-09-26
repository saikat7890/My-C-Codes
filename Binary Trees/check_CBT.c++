#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isCompleteBinaryTree(vector<int> &arr){
    int n = arr.size();
    queue<int> q;
    q.push(0); // Start with the root

    bool nonLeafNode = false; // Flag to track if we have encountered a non-leaf node without both children
    for (int i = 0; i < n; ++i){
        if (arr[i] == -1){
            if (!nonLeafNode)
                nonLeafNode = true;
        }
        else{
            if (nonLeafNode)
                return false; // If a non-leaf node is encountered after a leaf node, it's not a complete binary tree

            while (!q.empty() && arr[q.front()] == -1)
                q.pop(); // Pop all leaf nodes from the queue

            if (!q.empty())
            {

                int front = q.front();

                q.pop();

                if (arr[front] == -1)
                    return false; // If a leaf node is encountered, it's not a complete binary tree

                q.push(2 * i + 1); // Push left child

                q.push(2 * i + 2); // Push right child
            }
        }
    }

    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    if (isCompleteBinaryTree(arr)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}