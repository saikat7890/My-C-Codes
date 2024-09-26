#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    vector<int> ans(n);
    ans[0]=1;
    int a=0,b=0,c=0;
    for (int i = 1; i < n; i++)
    {
        int num = min({ans[a]*2, ans[b]*3, ans[c]*5});
        ans[i]=num;
        if(num == ans[a]*2) a++;
        if(num == ans[b]*3) b++;
        if(num == ans[c]*5) c++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}