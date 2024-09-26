#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
    map<string, int> :: iterator it = mp.begin();
    while(it != mp.end()){
        cout<<"Key: "<< it->first <<", Value: "<< it->second <<endl;
        it++;
    }
    // cout<<mp[1]<<endl; not valid beacuse '1' is a value not a key
    return 0;
}