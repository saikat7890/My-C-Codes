//Reverse a string using stack
// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     string str = "Hello";
//     stack<char> s;
//     for (int i = 0; i < str.length(); i++){
//         char ch = str[i];
//         s.push(ch);
//     }
//     string ans = "";
//     while (!s.empty()){
//         char ch = s.top();
//         ans.push_back(ch);
//         s.pop();
//     }
//     cout<<"Reversed string: "<<ans<<endl;
    
//     return 0;
// }
// //Delete middle element & insert at bottom of the stack
// #include<iostream>
// #include<stack>
// using namespace std;
// void deleteSolve(stack<int> &s,int count,int size){
//     if(count == size/2){
//         s.pop();
//         return;
//     }
//     int x = s.top();
//     s.pop();
//     deleteSolve(s, count+1, size);
//     s.push(x);
// }
// void deleteMiddle(stack<int> &s){
//     int count = 0;
//     deleteSolve(s, count, s.size());
// }
// void insertAtBottom(stack<int> &st, int ele){
//     if(st.empty()){
//         st.push(ele);
//         return;
//     }
//     int x = st.top();
//     st.pop();
//     insertAtBottom(st, ele);
//     st.push(x);
// }
// void printStack(stack<int> s){
//     if(s.empty()){
//         return;
//     }
//     int x = s.top();
//     s.pop();
//     printStack(s);
//     cout<< x <<" ";
//     s.push(x);
// }
// int main(){
//     int n = 5;
//     int arr[5] = {1,2,3,4,5};
//     stack<int> s;
//     for (int i = 0; i < n; i++){
//         s.push(arr[i]);
//     }
//     deleteMiddle(s);
//     printStack(s);cout<<endl;
    
//     printStack(s);cout<<endl;
//     insertAtBottom(s, 10);
//     printStack(s);cout<<endl;
//     return 0;
// }

// //  Valid Parenthesis check
// #include<iostream>
// #include<stack>
// using namespace std;
// bool validParenthesis(string expression){
//     stack<char> st;
//     for (int i = 0; i < expression.length(); i++){
//         char ch = expression[i];
//         if (ch=='(' || ch=='{' || ch=='['){
//             st.push(ch);
//         }
//         else {
//             if(!st.empty()){
//                 char top = st.top();
//                 if ((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='[')){
//                     st.pop();
//                 } else {
//                     return false;
//                 }
//             } else {
//                 return false;
//             }
//         }
//     }
//     if(st.empty()){
//         return true;
//     } else {
//         return false;
//     }
// }
// int main()
// {
//     string expression = "[{(())}]";
//     if(validParenthesis(expression)){
//         cout<<"Valid parenthesis"<<endl;
//     } else{
//         cout<<"Not valid parenthesis"<<endl;
//     }
//     return 0;
// }

// //Reverse a stack using recursion
// #include<iostream>
// #include<stack>
// using namespace std;
// void insertAtBottom(stack<int> &st, int ele){
//     if(st.empty()){
//         st.push(ele);
//         return;
//     }
//     int x = st.top();
//     st.pop();
//     insertAtBottom(st, ele);
//     st.push(x);
// }
// void reverseStack(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
//     int x = st.top();
//     st.pop();
//     reverseStack(st);
//     insertAtBottom(st, x);
// }
// void printStack(stack<int> s){
//     if(s.empty()){
//         return;
//     }
//     int x = s.top();
//     s.pop();
//     printStack(s);
//     cout<< x <<" ";
//     s.push(x);
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     stack<int> s;
//     for (int i = 0; i < 5; i++){
//         s.push(arr[i]);
//     }
//     reverseStack(s);
//     printStack(s);cout<<endl;
//     return 0;
// }

// //Sort a stack
// #include<bits/stdc++.h>
// using namespace std;
// void sortedInsert(stack<int> &s, int num){
//     if(s.empty() || (s.top() < num)){
//         s.push(num);
//         return;
//     }
//     int y = s.top();
//     s.pop();
//     sortedInsert(s, num);
//     s.push(y);
// }
// void sortStack(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
//     int x = st.top();
//     st.pop();
//     sortStack(st);
//     sortedInsert(st, x);
// }
// void printStack(stack<int> &s){
//     if(s.empty()){
//         return;
//     }
//     int x = s.top();
//     s.pop();
//     printStack(s);
//     cout<< x <<" ";
//     s.push(x);
// }
// int main()
// {
//     int arr[6] = {3,-7,9,-2,9,5};
//     stack<int> st;
//     for (int i = 0; i < 6; i++){
//         st.push(arr[i]);
//     }
//     printStack(st);cout<<endl;
//     sortStack(st);
//     printStack(st);cout<<endl;
//     return 0;
// }

//Checking redundant brackets
// #include<bits/stdc++.h>
// using namespace std;
// bool isRedundant(string exp){
//     stack<char> st;
//     for (int i = 0; i < exp.length(); i++){
//         char ch = exp[i];
//         if (ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
//             st.push(ch);
//         }
//         else{
//             if(ch==')'){
//                 bool flag = true;
//                 while(st.top() != '('){
//                     char top = st.top();
//                     if(top=='+' || top=='-' || top=='*' || top=='/'){
//                         flag = false;
//                     }
//                     st.pop();
//                 }
//                 if(flag == true){
//                     return true;
//                 }
//                 st.pop();
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     // string exp = "(a*(b+)+(c/d))";
//     string exp = "((a*b))";
//     if(isRedundant(exp)){
//         cout<<"The expression have redundant brackets"<<endl;
//     } else {
//         cout<<"The expression have no redundant brackets"<<endl;
//     }
//     return 0;
// }

//Minimum cost to make valid parenthesis string
#include<bits/stdc++.h>
using namespace std;
int minCost(string exp){
    if(exp.length()%2 == 1){
        return -1;
    }
    stack<char> st;
    for (int i = 0; i < exp.length(); i++){
        char ch = exp[i];
        if(ch == '{'){
            st.push(ch);
        }
        else {
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else {
                st.push(ch);
            }
        }
    }

    //stack contains invalid parenthesis
    int open = 0, close = 0;
    while(!st.empty()){
        if(st.top() == '{')
            open++;
        else
            close++;
        st.pop();
    }
    int ans = (open+1)/2 + (close+1)/2;
    return ans;
}
int main()
{
    string exp = "{{}}{{{}";
    cout<<"Minimum cost to make valid parenthesis: "<<minCost(exp)<<endl;
    // cout<<(1/2)<<endl;
    return 0;
}