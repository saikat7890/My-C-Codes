#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    // pair<int, string> p;
    // // p = make_pair(2, "abc");
    // p = {2, "abcd"};
    // pair<int, string> &p1 = p;
    // pair<int, int> p_array[3];
    // cout<<p.first<<" "<<p.second<<endl;
    // p_array[0] = {1,2};
    // p_array[1] = {3,2};
    // p_array[2] = {3,4};
    // for (int i = 0; i < 3; i++){
    //     cout<< p_array[i].first << " " << p_array[i].second <<endl;
    // }
    // swap(p_array[0], p_array[2]);
    map<int, string> mp;
    mp[1] = "abc";
    mp[5] = "cbc";
    mp[3] = "acd";

    mp.insert({4, "afg"});

    for(auto &pr: mp){
        cout<<pr.first <<" "<<pr.second<<endl;    
    }
    mp.erase(5);
    for(auto i: mp){
        cout<< i.first <<" "<<i.second<<endl;
    }
    return 0;
}