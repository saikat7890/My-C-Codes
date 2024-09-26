// // Max Sum Subarray of size K
// //T.C = O(1), S.C = O(k)
// #include<iostream>
// using namespace std;
// int findMaxSubArraySum(int arr[],int n,int k){
//     if(n<k){
//         return -1;
//     }
//     int window_sum = 0;
//     for(int i=0; i<k; i++){
//         window_sum += arr[i];
//     }
//     int curr_sum = window_sum;
//     for(int i=k; i<n; i++){
//         curr_sum = curr_sum - arr[i-k] + arr[i];
//         window_sum = max(window_sum, curr_sum);
//     }
//     return window_sum;
// }
// int main()
// {
//     int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int window_size = 4;
//     cout<<"Max subarray sum: "<<findMaxSubArraySum(arr, size, window_size)<<endl;
//     return 0;
// }

// // First negative integer in every window of size k
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// vector<int> firstNegative(int arr[],int n,int k){
//     vector<int> ans;
//     queue<int> q;
//     int i=0,j=0;
//     while(j < n){
//         if(arr[j] < 0){
//             q.push(arr[j]);
//         }
//         if(j-i+1 == k){
//             if(q.empty()){
//                 ans.push_back(0);
//             }
//             else{
//                 ans.push_back(q.front());
//                 if(arr[i] == q.front()){
//                     q.pop();
//                 }
//             }
//             i++;
//             j++;
//         }
//         else{
//             j++;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int arr[] = {-8, 2, 3, -6, 10};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int window_size = 4;
//     vector<int> resultArr = firstNegative(arr, size, window_size);
//     cout<<"First -ve integers in the array: ";
//     for (int i = 0; i < resultArr.size(); i++){
//         cout<<resultArr[i]<<" ";
//     }
//     return 0;
// }

// Largest Subarray of sum K (only for positive numers)
#include<bits/stdc++.h>
using namespace std;
int lenOfLongSubarr(int arr[], int n, int k){
    int i=0,j=0,sum=0;
    int maxLen = INT_MIN;
    while(j < n){
        sum += arr[j];
        if(sum == k){
            maxLen = max(maxLen, j-i+1);
            j++;
        }
        else if(sum < k){
            j++;
        }
        else{
            while(sum > k){
                sum -= arr[i];
                i++;
            }
            if(sum == k){
                maxLen = max(maxLen, j-i+1);
            }
            j++;
        }
    }
    return maxLen;
}
int main()
{
     int arr[] = { 10, 5, 2, 7, 1, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 15;
    cout << "Length = " << lenOfLongSubarr(arr, n, sum);
    return 0;
}