//Fibonacchi Series
// #include<iostream>
// using namespace std;
// int fib(int n){
//     //base case
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     //recusive call
//     int ans = fib(n-1) + fib(n-2);
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//        cout<<fib(i)<<" ";
//     }
//     return 0;
// }

//Count Ways To Reach The N-th Stairs
#include<iostream>
using namespace std;
int stair(int n){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }

    int smallCal;
    smallCal = stair(n-1) + stair(n-2);
    return smallCal;
}
int main()
{
    int n;
    cout<<"Enter nth stair: ";
    cin>>n;
    cout << "Total ways are: "<< stair(n) <<endl;
    return 0;
}

// //say digits
// #include<iostream>
// using namespace std;
// void sayDigit(int n,string arr[]){
//     //base case
//     if(n == 0)
//         return;
    
//     //processing
//     int digit = n % 10;
//     n = n/10;

//     //recursive call
//     sayDigit(n, arr);

//     cout<< arr[digit]<< " ";

// }
// int main()
// {
//     string arr[10] = {"zero", "one", "two", "three", "four", "five",
//      "six", "seven", "eight", "nine"};

//     int n;
//     cout<<"Enter No. : "<< endl;
//     cin>>n;
//     cout<<endl;
//     sayDigit(n, arr);
//     return 0;
// }