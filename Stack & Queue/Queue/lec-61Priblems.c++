// #include<bits/stdc++.h>
// #include <queue>
// using namespace std;
// //reverse a queue using stack
// queue<int> reverse(queue<int> q){
//     stack<int> s;
//     queue<int> q2;
//     while(!q.empty()){
//         s.push(q.front());
//         q.pop();
//     }
//     while(!s.empty()){
//         q2.push(s.top());
//         s.pop();
//     }
//     return q2;
// }
// //using recursion
// void reverse(queue<int> &q){
//     if(q.empty()){
//         return;
//     }
//     int x = q.front();
//     q.pop();
//     reverse(q);
//     q.push(x);
// }
// void printQueue(queue<int> q){
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }cout<<endl;
// }
// //Reverse first k elements of a queue
// queue<int> modifyQueue(queue<int> q, int k) {
//     stack<int> s;
    
//     for(int i = 0; i<k; i++) {
//         int val = q.front();
//         q.pop();
//         s.push(val);
//     }
    
//     while(!s.empty()) {
//         int val = s.top();
//         s.pop();
//         q.push(val);
//     }
    
//     int t = q.size()-k;
    
//     while(t--) {
//         int val = q.front();
//         q.pop();
//         q.push(val);
//     }
    
//     return q;
// }
// int main(){
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     printQueue(q);
//     // queue<int> revQ = reverse(q);
//     // reverse(q);
//     queue<int> revfirstKEle = modifyQueue(q, 3); 
//     printQueue(revfirstKEle);
//     return 0;
// }

//First non repeating charecter in a stream
#include<bits/stdc++.h>
#include<queue>
using namespace std;
string firstNonRepeating(string str){
    map<char, int> m;
    queue<char> q;
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        q.push(ch);
        m[ch]++;
        while(!q.empty()){
            if(m[q.front()] > 1){
                q.pop();
            } else {
                ans.push_back(q.front());
                break;  
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}
int main(){
    string str = "aabbccdef";
    string ans = firstNonRepeating(str);
    cout<<ans<<endl;
    return 0;
}

// //Circular tour /no queue used
// #include<iostream>
// using namespace std;
// struct petrolPump
// {
//     int petrol;
//     int distance;
// };
// class Solution{
//   public:
//     int tour(petrolPump p[],int n)
//     {
//        int deficit = 0;
//        int balance = 0;
//        int start = 0; 
//        for(int i=0; i<n; i++) {
//            balance += p[i].petrol - p[i].distance;
//            if(balance < 0) {
//                start = i+1;
//                deficit += balance;
//                balance = 0;
//            }
//        }
//        if(balance + deficit >=0) 
//             return start;
//         return -1;   
//     }
// };
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         petrolPump p[n];
//         for(int i=0;i<n;i++)
//             cin>>p[i].petrol>>p[i].distance;
//         Solution obj;
//         cout<<obj.tour(p,n)<<endl;
//     }
// }