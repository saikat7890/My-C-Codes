// #include<iostream>
// using namespace std;
// #include<vector>
// int main()
// {
//     // vector<int> vect;
//     // vect.push_back(10);
//     // vect.push_back(20);
//     // vect.push_back(30);

//     // for(int x: vect){
//     //     cout << x <<" ";
//     // }

//     vector<int> vector1 = {1,2,3,4,5};
//     vector<int> vector2 ={4,5,6,7,8,9};
//     cout<<"Vector1: ";
//     for(int x: vector1){
//         cout<< x <<" ";
//     }
//     cout<<"\nVector2: ";
//     for(int x: vector2){
//         cout<< x <<" ";
//     }
//     cout<<endl;
//     cout<<"Element at Index 0: "<< vector1.at(0) <<endl;
//     cout<<"Element at Index 5: "<< vector1.at(2) <<endl;
//     cout<<"Element at Index 3: "<< vector1.at(4) <<endl;
//     return 0;
// }

//iterator 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={2,3,7,6,7};
    for(int i=0; i<v.size(); ++i){
        cout << v[i] <<" ";
    }
    cout<<endl;
    vector<int> ::iterator it = v.begin();
    for(it = v.begin(); it != v.end(); ++it){
        cout<< (*it) <<" ";
    }
    cout<<endl;
    //for pairs
    vector<pair<int,int>> p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> ::iterator itp;
    for(itp = p.begin(); itp != p.end(); ++itp){
        cout<<(itp->first)<<" "<<(*itp).second<<endl;
    }
    return 0;
}