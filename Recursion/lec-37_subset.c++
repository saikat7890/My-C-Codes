// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int size;
//     cin>>size;
//     int arr[size];
//     for (int i = 0; i < size; i++){
//         cin>>arr[i];
//     }
//     for (int i = 1; i <= size; i++){
//         for (int j = 0; j <= size-i; j++){
//             int len = i+j-1;
//             for (int k = j; k <= len; k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }   
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    //exclude
    solve(nums, output, index+1, ans);

    //include
    int ele = nums[index];
    output.push_back(ele);
    solve(nums, output, index+1, ans);
}
vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(nums, output, index, ans);
    return ans;
}

//Generate balanced parenthesis
void findAns(int open, int close, vector<string> &ans, string op){
    if(open == 0 && close == 0){
        ans.push_back(op);
        return;
    }
    if(open != 0){
        findAns(open-1, close, ans, op+'(');
    }
    if(close > open){
        findAns(open, close-1, ans, op+')');
    }
}
vector<string> generateParenthesis(int n) {
    vector<string> ans;
    string op="";
    int open=n;
    int close=n;
    
    findAns(open, close, ans, op);
    return ans;
}
void printSubsetOfSumK(int index, vector<int> &op, int sum, vector<int> arr, int k){
    if(index == arr.size()){
        if(sum == k){
            for(auto it: op){
                cout<<it<<" ";
            }cout<<endl;
        }
        return;
    }

    printSubsetOfSumK(index+1, op, sum, arr, k);

    op.push_back(arr[index]);
    sum += arr[index];
    printSubsetOfSumK(index+1, op, sum, arr, k);
    op.pop_back(); //backtracking
};
int main(){
    vector<int> arr = {1,1,1};
    cout<<"Subset of a given array";
    vector<vector<int>> result;
    result = subsets(arr);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"----"<<endl;
    cout<<"Printing subsequences of sum k"<<endl;
    int k=2;
    vector<int> op;
    printSubsetOfSumK(0, op, 0, arr, k);

    cout<<"----"<<endl;
    int bracketNo;
    cout<<"Enter the no of brackets to generate: ";
    cin>>bracketNo;
    vector<string> balancedBracket = generateParenthesis(bracketNo);
    for (int i = 0; i < balancedBracket.size(); i++)
    {
        cout<<balancedBracket[i]<<" ";
    }cout<<endl;
    
    return 0;
}



