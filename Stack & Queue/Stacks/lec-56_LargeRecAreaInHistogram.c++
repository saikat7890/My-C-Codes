//Next smaller element
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextSmallerElement(vector<int> arr,int size) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(size);

    // for (int i = 0; i <= size-1; i++){  //for previous smaller element
    for (int i = size-1; i >= 0; i--){    //for next smaller element
        int curr = arr[i];
        while (s.top() >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}
vector<int> nextGreaterElement(vector<int> arr,int size) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(size);
    for (int i = size-1; i >= 0; i--){    
        int curr = arr[i];
        while((s.top() <= curr && s.top() != -1)){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);   
    }
    return ans;
}
int main(){
    vector<int> arr= {7,1,5,3,6,4};
    int n = arr.size();
    cout << "Original Array: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    vector<int> arr2 = nextSmallerElement(arr, n);
    cout << "Next Smaller Element: ";
    for (int i = 0; i < n; i++){
        cout<<arr2[i]<<" ";
    }cout<<endl;

    vector<int> arr3 = nextGreaterElement(arr, n);
    cout << "Next Greater Element: ";
    for (int i = 0; i < n; i++){
        cout<<arr3[i]<<" ";
    }cout<<endl;

    return 0;
}


// //Largest Rectangular Area in a Histogram
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> prevSmallerIndex(vector<int> v,int n){
//     vector<int> ans(n);
//     stack<int> s;
//     s.push(-1);
//     for (int i = 0; i < n; i++){
//         int curr = v[i];
//         while(s.top() != -1 && v[s.top()] >= curr){
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(i);
//     }
//     return ans;
// }
// vector<int> nextSmallerIndex(vector<int> v,int n){
//     vector<int> ans(n);
//     stack<int> s;
//     s.push(-1);
//     for (int i = n-1; i >= 0; i--){
//         int curr = v[i];
//         while(s.top() != -1 && v[s.top()] >= curr){
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(i);
//     }
//     return ans;
// }
// int largeRectArea(vector<int> v, int size){
//     vector<int> prev(size);
//     prev = prevSmallerIndex(v, size);

//     vector<int> next(size);
//     next = nextSmallerIndex(v, size);

//     int area=INT_MIN;
//     for (int i = 0; i < size; i++){
//         int height = v[i];
//         if(next[i] == -1){
//             next[i] = size;
//         }
//         int width = next[i] - prev[i] -1;
//         int newArea = height * width;
//         area = max(area, newArea);
//     }
//     return area;
// }
// int main()
// {
//     vector<int> v = {2,1,2,2,2,2};
//     cout<<"Largest area: "<<largeRectArea(v, v.size()); 
//     return 0;
// }

//Celebrity Problem //bruteForce
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3] = {{0,1,0}, {0,0,0}, {0,1,0}};
    
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
            
//         }
        
//     }
    
//     return 0;
// }