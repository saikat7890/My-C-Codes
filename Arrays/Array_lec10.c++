// //Swap alternates
// #include<iostream>
// using namespace std;
// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";  
//     }cout<<endl;
// }
// void swapAlternate(int arr[], int n){
//     for(int i=0; i<n; i+=2){
//         if(i+1 < n){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

// int main(){
//     int even[8] = {2,4,6,8,10,12,14,16};
//     int odd[5] = {1,3,5,7,9};

//     swapAlternate(even, 8);
//     printArray(even, 8);

//     swapAlternate(odd, 5);
//     printArray(odd, 5);
//     return 0;
// }

//Find unique elements
// #include<iostream>
// using namespace std;
// int findUnique(int arr[],int size){
//     int ans=0;
//     for (int i = 0; i < size; i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int arr[7] = {2,3,4,2,3,4,5};
//     cout<<findUnique(arr, 7);
//     return 0;
// }

//Find the duplicate number
#include<iostream>
using namespace std;
int findDuplicate(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++){
        ans = ans^arr[i];
    }
    for(int i=1; i < size; i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    // int t;
    // cin>>t;
    // int n;
    // cin>>n;
    // int arr[n];
    // while(t >=0){
    //     for(int i=0; i<n; i++){
    //         cin>>arr[i];
    //     }
    // t--;
    // }
    int m;
    cin>>m;
    int arr[m];
    for(int i=0; i<m; i++){
            cin>>arr[i];
    }
    cout<<findDuplicate(arr, m);
    
    return 0;
}

// #include <iostream>
// using namespace std;

// int func(int arr[], int size){
//      int ans=0;
//     for (int i = 0; i < size; i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int n;
//     int arr[n];
    
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
    
//     int f = func(arr, n);
//     cout<<f<<endl;
//     return 0;
// }