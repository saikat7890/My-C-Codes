// #include<iostream>
// using namespace std;
// int factorial(int n){
//     //base case
//     if(n == 0)
//         return 1;

//     int smallerProblem = factorial(n-1);
//     int biggerProblem = n * smallerProblem;
//     return biggerProblem;

//     // return n * factorial(n-1);
// }
// int power(int n){
//     //base case
//     if(n == 0)
//         return 1;
//     //recursion relation
//     int smallerProblem = power(n-1);
//     int biggerProblem = 2 * smallerProblem;
//     return biggerProblem;

//     // return 2 * power(n-1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = factorial(n);
//     cout <<"Factorial " << ans << endl;
//     int pwof2 = power(n);
//     cout<<"Power of 2 "<< pwof2 <<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void print(int n){
//     //base case
//     if(n == 0){
//         return;
//     }
//     //recursive relation

//     //processing
//     cout << n << endl;
//     print(n-1);
    
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << endl;
//     print(n);
//     return 0;
// }

#include<iostream>
using namespace std;
int fibo(int n){
    if (n <= 1){
        return n;
    }
    else{
        return fibo(n-1) + fibo(n - 2);
    }
}
int main()
{
    int n;
    cout<<"Enter n number of fibonacchi series\n";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << fibo(i) << " ";
    }
    return 0;
}

