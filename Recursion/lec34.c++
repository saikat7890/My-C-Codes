// //Reverse a string using recursion
// #include<iostream>
// using namespace std;
// void reverse( string& str, int i, int j){   //here call by reference

//     cout << "Call received for " << str <<endl;
//     //base case
//     if(i>j)
//         return ;

//     swap(str[i], str[j]);
//     i++;
//     j--;

//     //recursive call
//     reverse(str,i,j);
// }

// string reverse( string str, int i, int j){   //here call by value
//     cout << "Call received for " << str <<endl;
//     //base case
//     if(i>j)
//         return ;
//     swap(str[i], str[j]);
//     i++;
//     j--;
//     //recursive call
//     string ans = reverse(str,i,j);
//     return ans;
// }
// int main()
// {
//     string name = "abcdef";
//     cout<<endl;
//     reverse(name, 0, name.length()-1);
//     // cout<< name <<endl;
//     return 0;
// }


//Check Palindrome of a string
// #include<iostream>
// using namespace std;

// bool checkPalindrome(string s, int i, int j){
//     //base case
//     if(i>j){
//         return true;
//     }
//     if(s[i] != s[j]){
//         return false;
//     }
//     else{
//         return checkPalindrome(s, i+1, j-1);
//     }
// }
// int main()
// {
//     string s1;
//     cin>>s1;
//     if (checkPalindrome(s1, 0, s1.length()-1)){
//         cout<<"It is a palindrome"<<endl;
//     }
//     else{
//         cout<<"It is not a palindrome"<<endl;
//     }
//     return 0;
// }

//Getting power of a number
// #include<iostream>
// using namespace std;
// int power(int a, int b){
//     //base case
//     if(b == 0){
//         return 1;
//     }
//     if(b == 1){
//         return a;
//     }
//     //recursive call
//     int ans = power(a, b/2);

//     if(b % 2 == 0){
//         return ans * ans;
//     }
//     else{
//         return a*ans*ans;
//     }
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     int ans = power(a, b);
//     cout<<ans<<endl;
//     return 0;
// }


// //Recursion with bubble sort
#include<iostream>
using namespace std;
void sortArray(int arr[], int n){
    if(n == 0 || n== 1){
        return;
    }

    for (int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    return sortArray(arr, n-1);
    
}
int main()
{
    int n=6;
    int arr[n] = {10,1,7,6,14,9};
    //Bubble Sort
    // for(int i=1; i<n; i++){
    //     for (int j = 0; j<n-i; j++)
    //     {
    //         if(arr[j] > arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}