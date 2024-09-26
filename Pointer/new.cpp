#include<iostream>
using namespace std;
int main()
{
    int temp[10];
    cout<< sizeof(temp) << endl;

    int *ptr = &temp[0];
    cout<< sizeof(ptr) << endl;
    cout<< sizeof(*ptr) << endl;
    cout<< sizeof(&ptr) << endl;
    return 0;
}