// #include<bits/stdc++.h>
// using namespace std;
// int helper(int m, int n, int i, int j, vector<vector<int>> &dp){
//     if(i==m-1 || j==n-1){
//         return 1;
//     }
//     if(dp[i][j] != 0){
//         return dp[i][j];
//     }
//     int right = helper(m,n, i, j+1, dp);
//     int down = helper(m,n, i+1, j, dp);
//     return dp[i][j] = right + down;
// }
// int uniquePaths(int m, int n){
//     vector<vector<int>> dp(m, vector<int>(n, 0));
//     return helper(m, n, 0, 0, dp);
// }
// int main()
// {
//     cout<<uniquePaths(4, 5)<<endl;
//     return 0;
// }

//Q2
#include<bits/stdc++.h>
using namespace std;
int helper(vector<int> coins, int amount, vector<int> &dp){
    if(amount==0) return 0;
    if(amount<0) return INT_MAX;
    if(dp[amount] != -1) return dp[amount];

    int ans = INT_MAX;
    for(int i=0; i<coins.size();i++){
        int sub = helper(coins, amount-coins[i], dp);
        if(sub == INT_MAX) continue;
        ans = min(ans, sub+1);
    }
    return dp[amount] = ans;
}
int coinChange(vector<int> coins, int amount){
    vector<int> dp(amount+1, -1);
    int ans = helper(coins, amount, dp);
    return ans == INT_MAX ? -1 : ans;
}
int main()
{
    vector<int> coins = {2,3,5,1};
    int amount = 12;
    int n = 4;
    cout<<coinChange(coins, amount);
    return 0;
}