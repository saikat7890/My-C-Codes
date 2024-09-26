#include<iostream>
#include<vector>
using namespace std;
void findCombinationSum(int index, int target, vector<int> &op, vector<vector<int>> &ans, vector<int> arr){
    if(index == arr.size()){
        if(target == 0){
            ans.push_back(op);
        }
        return;
    }
    //picking
    if(arr[index] <= target){
        op.push_back(arr[index]);
        // target -= arr[index];
        findCombinationSum(index, target - arr[index], op, ans, arr);
        op.pop_back();
    }
    //Not picking
    findCombinationSum(index+1, target, op, ans, arr);

}
vector<vector<int>> combinationSum(vector<int> arr,int sum){
    vector<int> op;
    vector<vector<int>> ans;
    findCombinationSum(0, sum, op, ans, arr);
    return ans;
}

int main()
{
    int n;cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int target;cin>>target;
    vector<vector<int>> ans = combinationSum(arr, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}