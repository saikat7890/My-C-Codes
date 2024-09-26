// #include<iostream>
// using namespace std;
// char toLowerCase(char ch){
//     if(ch >='a' && ch<= 'z'){
//         return ch;
//     }
//     else{
//         char temp= ch - 'A' + 'a';
//         return temp;
//     }
// }
// bool checkPalindrome(char name[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         if(toLowerCase(name[s]) != toLowerCase(name[e])){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// void reverse(char name[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         swap(name[s++], name[e--]);
//     }
// }

// int getLength(char name[]) {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// int main(){
//     char name[20];
//     cout<<"Enter your name "<< endl;
//     cin>> name;

//     cout << "Your name is ";
//     cout << name <<endl;
//     int len = getLength(name);
//     // int len = strlen(name);
//     cout << "Length: " << len <<endl;

//     reverse(name, len);
//     cout << "Your reverse name is ";
//     cout << name <<endl;

//     cout<<"Palindrome or not: "<<checkPalindrome(name, len);
//     return 0;
// }

// Check Palindrom of charecters(a,A,1)
//  #include<iostream>
//  using namespace std;
//  bool isValid(char ch){
//      if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
//          return 1;
//      }
//      else{
//          return 0;
//      }
//  }
//  char toLowerCase(char ch){
//      if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
//          return ch;
//      }
//      else{
//          return (ch - 'A' + 'a');
//      }
//  }
//  bool checkPalindrome(char arr[],int n){
//      int start=0;
//      int end=n - 1;
//      while(start<=end){
//          while(start<=end && !isValid(arr[start])){
//              start++;
//          }
//          while(start<=end && !isValid(arr[end])){
//              end--;
//          }
//         if(toLowerCase(arr[start]) != toLowerCase(arr[end])){
//             return false;
//         }
//         else{
//             start++;
//             end--;
//         }
//     }
//     return true;
// }
// int getLength(char arr[]){
//     int count=0;
//     for(int i=0; arr[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     char array[100];
//     cout << "Enter your array:";
//     cin>>array;
//     cout<<"Your charecter Array is: ";
//     cout<<array<<endl;
//     int len = getLength(array);
//     if(checkPalindrome(array, len) == 1)
//         cout<<"Palindrome."<<endl;
//     else
//         cout<<"Not Palindrome."<<endl;
//     return 0;
// }

// Valid Palindrome
// #include<iostream>
// using namespace std;
// bool isValid(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// char toLowerCase(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
//     {
//         return ch;
//     }
//     else
//     {
//         return (ch - 'A' + 'a');
//     }
// }
// bool checkPalindrome(string a)
// {
//     int start = 0;
//     int end = a.length() - 1;
//     while (start <= end)
//     {
//         if ((a[start]) != (a[end]))
//         {
//             return 0;
//         }
//         else
//         {
//             start++;
//             end--;
//         }
//     }
//     return 1;
// }

// bool isPalindrome(string s)
// {
//     string temp = "";
//     // remove unnecessary charecters
//     for (int i = 0; i < s.length(); i++){
//         if (isValid(s[i])){
//             temp.push_back(s[i]);
//         }
//     }
//     // turn the char to lower case
//     for (int i = 0; i < s.length(); i++){
//         temp[i] = toLowerCase(temp[i]);
//     }
//     // check palindrome
//     return checkPalindrome(temp);
// }

// int main(){
//     string str;
//     cout<<"Enter Your Sentence: ";
//     cin>>str;
//     if(isPalindrome(str) == 1){
//         cout<<"Palindrome Number.";
//     }
//     else{
//         cout<<"Not Palindrome Number.";
//     }
//     return 0;
// }

// //Reverse a word in String
// #include<iostream>
// using namespace std;
// string reverseWord(string str){

    
    
// }
// int main()
// {
//     string str;
//     cin>>str;
//     cout<<"Your string is: "<<str;
//     string rev_str = reverseWord(str);
//     cout<<"Your reversed string is: "<<rev_str;

//     return 0;
// }


//Return Maximun occuring charecter
#include<iostream>
using namespace std;
char getMaxOccurchar(string s){
    int arr[26] = {0};

    //create an array of count of charecters
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    
    //find maximum occuring char
    int maxi = -1,ans = 0;
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}

int main()
{
    string s;
    cin>>s;
    cout<< getMaxOccurchar(s);
    return 0;
}
