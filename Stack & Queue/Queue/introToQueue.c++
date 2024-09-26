//Normal Queue
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     queue<int> q;
//     q.push(5);
//     q.push(10);
//     q.push(15);
//     q.push(20);
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     cout<<q.size()<<endl;
//     q.pop();
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     cout<<q.size()<<endl;
//     cout<<q.empty()<<endl;
//     return 0;
// }

//Implementing Queue using array
// #include<iostream>
// using namespace std;
// class Queue{
//     int* arr;
//     int front;
//     int rear;
//     int size;
//     public:
//     Queue(){
//         size = 100001;
//         arr = new int[size];
//         front = 0;
//         rear = 0;
//     }
//     void enqueue(int data){
//         if(rear == size){
//             cout<<"Queue is full"<<endl;
//         }
//         else{
//             arr[rear] = data;
//             rear++;
//         }
//     }
//     int dequeue(){
//         if(rear == front){
//             cout<<"Queue is empty"<<endl;
//             return -1;
//         }
//         else{
//             int ans = arr[front];
//             arr[front] = -1;
//             front++;
//             if(front == rear){
//                 front = 0;
//                 rear = 0;
//             }
//             return ans;
//         }
//     }
//     int frontEle(){
//         if (front == rear){
//             return -1;
//         } else {
//             return arr[front];
//         }  
//     }
//     bool isEmpty(){
//         if(front == rear){
//             return true;
//         } else {
//             return false;
//         }
//     }
// };
// int main()
// {
//     Queue q;
//     q.dequeue();
//     q.enqueue(5);
//     q.enqueue(10);
//     q.enqueue(15);
//     cout<<q.frontEle()<<endl;
//     q.dequeue();
//     cout<<q.frontEle()<<endl;
//     cout<<q.isEmpty()<<endl;
//     return 0;
// }


// //Circular Queue implementing using array
// #include<iostream>
// using namespace std;
// class CircularQueue{
//     private:
//     int *arr;
//     int front;
//     int rear;
//     int size;

//     public:
//     CircularQueue(int n){
//         size = n;
//         arr = new int[size];
//         front = rear = -1;
//     }
//     void enqueue(int value){
//         if ((front==0 && rear==size-1) || (rear==(front-1)%(size-1)))
//         {
//             cout<<"Queue is full"<<endl;
//         }
//         else if (front == -1) { //first element to push/ empty queue
//             front = rear = 0;
//             // arr[rear] = value;
//         }
//         else if(rear == size-1 && front != 0){
//             rear = 0;        //to maintain cyclic nature
//             // arr[rear] = value;
//         }
//         else{  //normal flow
//             rear++;
//             // arr[rear] = value;
//         } 
//         arr[rear] = value;
//     }
//     int dequeue(){
//         if(front == -1){
//             cout<<"Queue is empty"<<endl;
//             return -1;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         if (front == rear) //single element is present
//         {
//             front = rear = -1;
//         }
//         else if(front == size -1){  //front is at last
//             front = 0; //to maintain cyclic nature
//         }
//         else{   //normal flow
//             front++;
//         }
//         return ans;
//     }
// };
// int main()
// {
//     CircularQueue q(5);
//     q.enqueue(2);
//     q.enqueue(4);
//     q.enqueue(6);
//     q.enqueue(8);
//     q.enqueue(10);

//     q.dequeue();
//     return 0;
// }


//Doubly Ended Queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     deque<int> d;
//     d.push_front(5);
//     d.push_back(10);
//     d.push_front(2);
//     cout<<d.front()<<endl;
//     cout<<d.back()<<endl;
//     d.pop_back();
//     d.pop_front();
//     cout<<d.front()<<endl;
//     cout<<d.back()<<endl;
//     return 0;
// }


// Implementing deque using arrays
#include<iostream>
using namespace std;
class Deque{
    private:
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Deque(int n){
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void pushFront(int x){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(front == 0 && rear!=size-1){
            front = size-1;
        }
        else{
            front--;
        }
        arr[front] = x;
    }
    void pushBack(int y){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(rear==size-1 && front!=0){
            rear = 0;
        } 
        else{
            rear++;
        }
        arr[rear] = y;
    }
    int popFront(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front]=-1;
        if(front == rear){
            front = rear = -1;
        }
        else if (front==size-1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }
    int popBack(){
        if(front == -1){
            cout<<"Stack is empty"<<endl;
        }
        int ans  = arr[rear];
        arr[rear]=-1;
        if (front == rear){
            front = rear = -1;
        }
        else if(rear == 0){
            rear = size-1;
        }
        else{
            rear--;
        }
        return ans;
    }
    int getRear(){
        if (front == -1){
            return -1;
        }
        return arr[rear];
    }
    int getFront(){
        if (front == -1){
            return -1;
        }
        return arr[front];
    }
    bool isFull(){
        if((front==0 && rear == size-1) ||
            (front != 0 && rear == (front-1)%(size-1)))
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Deque d(5);
    d.pushFront(5);
    d.pushBack(10);
    d.pushFront(2);
    cout<<d.getFront()<<endl;
    cout<<d.getRear()<<endl;
    d.popBack();
    d.popFront();
    cout<<d.getFront()<<endl;
    cout<<d.getRear()<<endl;
    cout<<d.isFull()<<endl;
    
    return 0;
}