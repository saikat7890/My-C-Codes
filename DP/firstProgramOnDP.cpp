#include<iostream>
#include<vector>
using namespace std;
int fibo(int n, vector<int> &dp){
    if(n<=1){
        return n;
    }
    if(dp[n] != -1) return dp[n]; 

    return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
}
int main()
{
    int n;cin>>n;
    vector<int> dp(n+1, -1);
    cout<<"Fiboacchi No: "<<fibo(n, dp)<<endl;

    //tribulnam../.';pl
    int prev2=0;
    int prev=1;
    for (int i = 2; i <= n; i++){
        int curi = prev + prev2;
        prev2 = prev;
        prev = curi;
    }
    cout<<"Fibonacchi with s.c=0(1): "<<prev<<endl;
    
    return 0;
}