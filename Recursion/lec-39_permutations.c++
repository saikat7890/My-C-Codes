#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> nums, vector<vector<int>> &ans, int index){
    //base case
    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }

    
    for (int j = index; j < nums.size(); j++){
        swap(nums[index], nums[j]);
        solve(nums, ans, index+1);
        //backtrack
        swap(nums[index], nums[j]);
    }
    

}
vector<vector<int>> permutations(vector<int> &nums){
    vector<vector<int>> ans;
    int index = 0;

    solve(nums, ans, index);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    vector<vector<int>> result = permutations(nums); 

    for(auto element: result){
        for(auto num: element){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}


// //For string
// #include<bits/stdc++.h>
// using namespace std;
// void solve(string str, vector<string> &ans, int index){
//     //base case
//     if(index >= str.length()){
//         ans.push_back(str);
//         return;
//     }

//     for (int j = index; j < str.length(); j++)
//     {
//         swap(str[index], str[j]);
//         solve(str, ans, index+1);
//         //backtrack
//         swap(str[index], str[j]);
//     }

// }
// vector<string> permutations(string &str){
//     vector<string> ans;
//     int index = 0;

//     solve(str, ans, index);
//     return ans;
// }
// int makeStringSmaller(int n, string &s, string &t) {
//     // Write your code here.
//     vector<string> s1Set = permutations(s);
//     vector<string> s2Set = permutations(t);
//     int check = 0;
//     for (int i = 0; i < n; i++)
//     {
//         check = s1Set[i].compare(s2Set[i]);
//     }
//     return check;
    
// }
// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     string s1;
//     string s2;
//     cout << "Enter String No1: "<<endl;
//     cin>>s1;
//     cout << "Enter String No2: "<<endl;
//     cin>>s2;

//     // vector<string> result = permutations(s1); 
//     int comp = makeStringSmaller(n, s1, s2);

//     // for(auto element: result){
//     //     for(auto num: element){
//     //         cout << num << " ";
//     //     }
//     //     cout << endl;
//     // }
//     cout<<comp<<endl;
//     return 0;
// }