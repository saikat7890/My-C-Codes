/*#include<iostream>
using namespace std;
int main()
{
    // int i = 5;
    // int *q = &i;
    // cout<< q << endl;
    // cout<< *q << endl;
    // int *p = 0;
    // p = &i;
    // cout<< p << endl;
    // cout<< *p << endl;

    // int num = 5;
    // int *p = &num;
    // int a = *p;
    // a++;
    // cout<< num << endl;
    // (*p)++;
    // cout<< num << endl;

    //coping a pointer
    // int n = 5;
    // int *p = &n;
    // int *q = p;
    // cout<< p <<"-"<< q << endl;
    // cout<< *p <<"-"<< *q << endl;

    return 0;
}*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     // int arr[10] = {23,122,41,67};
//     // cout <<" Address of first memory block is " << arr << endl;
//     // cout <<" Address of first memory block is " << &arr[0] << endl;
//     // cout <<"4th "<< *arr << endl;
//     // cout <<"5th "<< *arr + 1 << endl;
//     // cout <<"6th "<< *(arr + 1) << endl;
//     // cout <<"7th "<< *(arr) + 1 << endl;
//     // cout <<"8th "<< arr[2] << endl;
//     // cout <<"9th "<< *(arr + 2) << endl;

//     // int i=3;
//     // cout << i[arr] << endl;
    

    // int temp[10];
    // cout<<"1st "<<sizeof(temp) << endl;
    // cout<<"2nd "<< sizeof(*temp) << endl;
    // cout<<"3rd "<< sizeof(&temp) << endl; // value is 8
    // cout<<"4th "<< sizeof(&temp[0]) << endl; // value is 8
    // int *ptr = &temp[0];
    // cout<< sizeof(ptr) << endl; // value is 8
    // cout<< sizeof(*ptr) << endl;
    // cout<< sizeof(&ptr) << endl; // value is 8


//     // int a[20] = {1,2,3,5};
//     // cout << &a[0] <<endl;
//     // cout << &a <<endl;
//     // cout << a <<endl;
//     // int *p = &a[0];
//     // cout << p <<endl;
//     // cout << &p <<endl;
//     // cout << *p <<endl;

//     int arr[10];
//     //arr = arr + 1;   //ERROR
//     int *ptr = &arr[0];
//     cout << ptr << endl;
//     ptr = ptr + 1;
//     cout << ptr << endl;

//     return 0;
// }

//char array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     char ch[6] = "abcde";
//     cout << "1th "<< arr << endl;
//     cout << "2th " << ch << endl;

//     char *c = &ch[0];
//     cout << "3th " << c << endl; //prints entire string

//     char temp = 'z';
//     char *p = &temp;
//     cout << "4th "<< p << endl;

//     return 0;
// }


//function and pointers
// #include<iostream>
// using namespace std;

// void update(int *p){
//     *p = *p + 1;
// }
// int main()
// {
//     int value = 5;
//     int *p = &value;

//     cout << "Before "<< *p << endl;
//     update(p);
//     cout << "After "<< *p << endl;

//     int arr[5] = {1,2,3,4,5};
//     cout

//     return 0;
// }