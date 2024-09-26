// #include<bits/stdc++.h>
// using namespace std;
// int maxSubSum(int arr[], int n){
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for(int k=i; k<=j; k++){
//                 sum += arr[k];
//             }
//             maxSum = max(sum, maxSum);
//         }
//     }
//     return maxSum;
// }
// int main()
// {
//     int arr[] = {-2,-3,4,-1,-2,1,5,-3};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     // int s = maxSubSum(arr, size);
//     // cout<<s<<endl;
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//Maximum subarray sum using kadane's algo
#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n) {
    long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
        }
        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }
    // To consider the sum of the empty subarray
    //if (maxi < 0) maxi = 0;
    return maxi;
}
int main(){
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}