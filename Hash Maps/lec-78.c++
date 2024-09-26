#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    // insertion type 1
    pair<string, int> p = make_pair("saikat", 3);
    m.insert(p);
    // insertion type 2
    pair<string, int> pair2("sai", 2);
    m.insert(pair2);
    // insertion type 3
    m["rahul"] = 1;

    //search
    cout<<m["sai"] <<endl;
    cout<<m.at("saikat") <<endl;

    cout<< m["unknownKey"]<<endl;
    cout<<m.at("unknownKey") <<endl;

    //to check presence
    cout<< m.count("bheem") <<endl;

    //erase
    cout<<"Before erase size:"<<m.size()<<endl;
    m.erase("sai");
    cout<<"After erase size:"<<m.size()<<endl;

    for(auto i: m){
        cout<< i.first << " " << i.second <<endl;
    }

    //iterator
    cout<<"Traversal using iterator"<<endl;
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<< it->first << " " << it->second <<endl;
        it++;
    }


    return 0;
}