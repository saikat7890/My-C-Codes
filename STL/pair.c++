#include<iostream>
using namespace std;
int main()
{
    pair<int, string> p;
    p = make_pair(2, "abc");

    pair<int, string> p1(80, "Hello");
    // p1 = p;
    p.swap(p1);
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    return 0;
}