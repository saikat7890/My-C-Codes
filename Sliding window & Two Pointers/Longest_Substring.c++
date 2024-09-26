//Find the longest substring without repeating characters
#include<bits/stdc++.h>
using namespace std;
// //Brute force approach
// int lengthOfLongestSubstring(string s) {
//     int len = s.length();
//     int maxLen = INT_MIN;
//     for(int i=0; i<len; i++){
//         unordered_set<int> uns;
//         for(int j=i; j<len; j++){
//             if(uns.find(s[j]) != uns.end()){
//                 maxLen = max(maxLen, j-i);
//                 break;
//             }
//             uns.insert(s[j]);
//         }
//     }
//     return maxLen;
// }
// //Better Approach using two pointers
// int lengthOfLongestSubstring(string s) {
//     unordered_set<int> unset;
//     int maxLen = 0;
//     int l=0, r=0;
//     for(r=0; r<s.length(); r++){
//         if(unset.find(s[r]) != unset.end()){
//             while(l<r && unset.find(s[r]) != unset.end()){
//                 unset.erase(s[l]);
//                 l++;
//             }
//         }
//         unset.insert(s[r]);
//         maxLen = max(maxLen, r-l+1);
//     }
//     return maxLen;
// }
//Optimal approach
int lengthOfLongestSubstring(string s) {
    map<char, int> mpp;
    int l=0, r=0;
    int maxLen = 0;
    while(r < s.length()){
        char ch=s[r];
        if(mpp.find(ch) != mpp.end()){
            l = max(mpp[ch]+1, l);
        }

        mpp[ch] = r;
        maxLen = max(maxLen, r-l+1);
        r++;
    } 
    return maxLen;
}
int main()
{
    string str = "abcabcbb";
    // string str = "abcd";
    cout<<"Longest substring length: "<<lengthOfLongestSubstring(str)<<endl;
    return 0;
}