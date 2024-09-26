// //Reverse An array
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> reverse(vector<int> v){
//     int s=0;
//     int e=v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);
//     for(auto ele:v){
//         cout<< ele<<" ";
//     }cout<<endl;
//     vector<int> ans = reverse(v);
//     cout<<"Reverse Array: "<<endl;
//     for(auto ele: ans){
//         cout<< ele<<" ";
//     }
//     return 0;
// }

//Merge two sorted arrays
#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int ans[]){
    int i=0,j=0,k=0;
    while (i<n && j<m){
        if (arr1[i] < arr2[j]){
            ans[k] = arr1[i];
            i++;
            k++;
        }
        else{
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }
    //coping arr1 remaining ele to ans
    while (i < n){
        ans[k++] = arr1[i++];
    }
    //coping arr2 remaining ele to ans
    while (j < m){
        ans[k++] = arr2[j++];
    }
}
int main()
{
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int ans[8] = {0};
    merge(arr1, 5, arr2, 3, ans);
    for (int i = 0; i < 8; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}