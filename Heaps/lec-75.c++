#include<iostream>
#include<queue>
using namespace std;
int kthSmallestElement(int arr[], int size, int k){
    priority_queue<int> maxHeap;
    for (int i = 0; i < k; i++){
        maxHeap.push(arr[i]);
    }
    for (int i = k; i < size; i++){
        if (arr[i]< maxHeap.top()){
            maxHeap.pop();
            maxHeap.push(arr[i]);
        }
    }
    
    return maxHeap.top();
}
int main(){
    int n=5;
    int arr[] = {7,10,4,20,15};
    int k=4;

    cout<<"Kth smallest Element is: "<<kthSmallestElement(arr, n, k)<<endl;
    // cout<<"Is the binary tree a heap"<<isHeap();
    return 0;
}