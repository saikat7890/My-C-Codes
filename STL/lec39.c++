//Deque
// #include<iostream>
// #include<deque>
// using namespace std;
// int main()
// {
//     deque<int> nums {2,3};
//     cout<<"Initial Deque: ";
//     for(int i : nums){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     nums.push_back(4);
//     nums.push_front(1);
//     cout<<"Final deque: ";

//     // nums.pop_front();

//     for(int i: nums){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"First Index ele: "<<nums.at(1)<<endl;
//     cout<<"Front: "<<nums.front()<<endl;
//     cout<<"Back: "<<nums.back()<<endl;

//     cout<<"Empty or not: "<<nums.empty()<<endl;

//     cout<<"Before erase: "<<nums.size()<<endl;
//     nums.erase(nums.begin(), nums.begin()+1);
//     cout<<"After erase: "<<nums.size()<<endl;
//     for(int i: nums){
//         cout<<i<<" ";
//     }
//     return 0;
// }

//List
// #include<iostream>
// #include<list>
// using namespace std;
// int main()
// {
//     list<int> l ;

//     list<int> n(5, 100);
//     cout<<"Printing n"<<endl;
//     for(int i : n){
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     l.push_back(1);
//     l.push_front(2);

//     // l.pop_front();

//     for(int i: l){
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     l.erase(l.begin());
//     cout<<"After erase: "<<l.size()<<endl;
//     for(int i: l){
//         cout<<i<<" ";
//     }
//     return 0;
// }

//Stack
// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<string> s;

//     s.push("Hello");
//     s.push("Hi");
//     s.push("Bye");

//     cout<<"Top Element: "<<s.top()<<endl;
//     s.pop();
//     cout<<"Top Element: "<<s.top()<<endl;
//     cout<<"Size of stack "<<s.size()<<endl;
//     return 0;
// }

//Sets
// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(5);
//     s.insert(5);
//     s.insert(1);
//     s.insert(8);
//     s.insert(1);
//     s.insert(4);
//     s.insert(0);
//     for(int i: s){
//         cout<<i<<" ";
//     }cout<<endl;
    
//     set<int>::iterator it = s.begin();
//     it++;
//     s.erase(it);
//     for(int i: s){
//         cout<<i<<" ";
//     }

//     // set<int>::iterator itr = s.find(5);
//     // for(int it=itr; it!=s.end(); it++){
//     //     cout<<it<<" ";
//     // }cout<<endl;
//     return 0;
// }

//Map
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "ab";
    m[13] = "abc";
    m[2] = "abcd";
    m.insert(make_pair(3, "Saikat"));
    m.insert({5, "Hello"});

    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding -13 ->"<<m.count(-13)<<endl;
    m.erase(13);
    
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;  
} 