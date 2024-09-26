#include<bits/stdc++.h>
using namespace std;
void fillPrefixSum(int arr[], int n, int result[]){
    result[0] = arr[0];
    for (int i = 1; i < n; i++) {
        result[i] = result[i-1] + arr[i];
    }
}
int main() {
    int arr[] = {10,20,10,5,15,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixSum[n];
    fillPrefixSum(arr, n, prefixSum);
    for (int i = 0; i < n; i++) {
        cout<<prefixSum[i]<<" ";
    }
    cout<<endl;
    // Sum of an array between indexes L and R using Prefix
    int queries=4;
    vector<vector<int>> query={{2,3}, {4,6}, {1,5}, {3,6}};  // {L,R} , 1 based indexing of L & R
    for (int i = 0; i < queries; i++) {
        int L=query[i][0], R=query[i][1];
        if(R>n || L<1) {
            cout<< "Please input in range 1 to "<<n<<endl;
            continue;
        }
        if(L == 1){
            cout<<"Sum of ele's btw "<<L<<" & "<<R<<": "<<prefixSum[R-1]<<endl;
        } else {
            cout<<"Sum of ele's btw "<<L<<" & "<<R<<": "<<prefixSum[R-1]-prefixSum[L-2]<<endl;
        }
    }
    return 0;
}