#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int getKthLargest(vector<int> &arr, int k){
	priority_queue<int, vector<int>, greater<int>> minHeap;
	int n = arr.size();
	for(int i=0; i<n; i++){
		int sum=0;
		for(int j=i; j<n; j++){
			sum += arr[j];
			if(minHeap.size() < k){
				minHeap.push(sum);
			}
			else{
				if(sum > minHeap.top()){
					minHeap.pop();
					minHeap.push(sum);
				}
			}
		}
	}
	return minHeap.top();
}
int main()
{
    vector<int> arr = {5,4,-8,6};
    int k = 10;  // o/p-> -8
    cout<<"Kth largest subarray sum: "<<getKthLargest(arr, k)<<endl;
    return 0;
}