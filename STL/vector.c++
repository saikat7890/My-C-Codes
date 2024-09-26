// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     cout<<"Capacity-> "<<v.capacity()<<endl;

//     v.push_back(1);
//     cout<<"Capacity-> "<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<"Capacity-> "<<v.capacity()<<endl;
//     v.push_back(3);
//     cout<<"Capacity-> "<<v.capacity()<<endl;

//     cout<<"Size-> "<<v.size()<<endl;

//     cout<<"Element at 2nd Index" <<v.at(2)<<endl;

//     cout<<"Front "<<v.front()<<endl;
//     cout<<"Back "<<v.back()<<endl;

//     cout<<"Before pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     v.pop_back();

//     cout<<"After pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"Before clear size "<< v.size()<<endl;
//     v.clear();
//     cout<<"After clear size "<< v.size()<<endl;

//     vector<int> a(5,1);

//     vector<int> last(a);  //copying a

//     cout<<"Print last"<<endl;
//     for(int i:last){
//         cout<<i<<" ";
//     }cout<<endl;

//     return 0;
// }

/*
#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v;
    // vector<int> *vp = new vector<int>();

    for (int i = 0; i < 100; i++)
    {
        cout <<"Size:"<< v.size() << endl;
        cout << "Capacity:"<<v.capacity() << endl;
        v.push_back(i + 1);
    }
    cout<<"end"<<endl;
    

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1]=50;
    v[3]=1002;   //don't use for inserting element
    v[4]=1234;

    v.push_back(23);
    v.push_back(234);

    cout<< v[0] <<endl;
    cout<< v[1] <<endl;
    cout<< v[3] <<endl;
    cout<< v[4] <<endl;
    cout<< v[5] <<endl;
    cout<< v[6] <<endl;

    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;

    return 0;
}
*/

//Vector of string
#include<iostream> 
#include<vector> 
using namespace std; 
void show(vector<string> &v) { 
    cout << v.size()<<endl; 
    for (int i = 0; i < v.size(); ++i) { 
        cout << v[i]<<" "; 
    } 
    cout << endl;
} 
int main(){ 
    vector<string> v; 
    for (int i = 0; i < 5;++i) { 
        string s; 
        cin >> s;
        v.push_back(s); 
    } 
    show(v); 
    return 0; 
}