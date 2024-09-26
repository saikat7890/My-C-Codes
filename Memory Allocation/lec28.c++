// #include<iostream>
// using namespace std;

// int& func1(int a){
//     int num = a;
//     int& ans = num;
//     return ans;
// }
// int* func2(int n){
//     int* ptr = &n;
//     return ptr; 
// }
// void update1(int n){   //pass by value
//     n++;
// }
// void update2(int& n){    //pass by reference
//     n++;
// }

// int main()
// {
//     // int i = 5;
//     // //create a ref variable
//     // int &j = i;

//     // cout << i << endl;
//     // i++;
//     // cout << i << endl;
//     // j++;
//     // cout << i << endl;
//     // cout << j << endl;

//     int n= 5;
//     cout << "Before n " << n << endl;
//     update2(n);
//     cout << "After n " << n << endl;

//     // func2(n);
//     cout << "reference in function: n " << func1(n) << endl;
//     return 0;
// }

//Return by reference
// #include<iostream>
// using namespace std;
// int a;  //global variable
// int& num(){
//     return a;
// }

// int main()
// {
//     num() = 76;
//     cout<< a;
//     return 0;
// }

//Dynamic Memory Allocation
// #include<iostream>
// using namespace std;
// int main()
// {
//     // char ch = 'q';
//     // cout << sizeof(ch) <<endl;
//     // char* c = &ch;
//     // cout << sizeof(ch) <<endl;
//     char* ch = new char;   //Dynamic memory allocated

//     int n;
//     cin >> n;
//     int* arr = new int[n];   //variable size array 

//     return 0;
// }

//Address typecasting
#include<iostream>
using namespace std;
int main()
{
    //implicit typecasting
    int x = 65;
    char c = x;
    cout << c <<endl;

    //explicit typecasting
    int i = 65;
    int* p = &i;
    char* pc = (char*) p;
    cout<< *pc <<endl; 
    return 0;
}