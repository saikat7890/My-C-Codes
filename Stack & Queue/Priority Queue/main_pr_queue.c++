#include<bits/stdc++.h>
using namespace std;
void showpq(priority_queue<int> g){
    while (!g.empty()) {
        cout << ' ' << g.top();
        g.pop();
    }
    cout << '\n';
}
int main()
{
    int arr[6] = { 10, 2, 4, 8, 6, 9 };
    priority_queue<int> pq;
    for (int i = 0; i < 6; i++){
        pq.push(arr[i]);
    }
    cout<<"Priority Queue1: ";
    showpq(pq);
    // priority_queue<int, queue<int>, greater<int>> gpq(arr, arr+6);
    // showpq(gpq);
    pq.push(20);
    pq.push(30);
    pq.pop();
    showpq(pq);
    cout<<"Top Element: "<<pq.top()<<endl;
    cout<<"Is empty: "<<pq.empty()<<endl;
    cout<<"Size: "<<pq.size()<<endl;

    priority_queue<int> pq2;
    pq2.push(3);
    pq2.push(5);
    pq2.push(7);
    pq2.push(9);

    cout<<"Priority Queue2: ";
    showpq(pq2);
    pq.swap(pq2);
    cout<<"After Swap: "<<endl;
    showpq(pq);
    showpq(pq2);



    return 0;
}