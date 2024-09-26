// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<int> s;
//     s.push(2);
//     s.push(3);
//     s.pop();
//     cout<<"Printing top element "<< s.top() <<endl;
//     if(s.empty()){
//         cout<<"Stack is empty"<<endl;
//     }
//     else{
//         cout<<"Stack is not empty"<<endl;
//     }
//     return 0;
// }

//Stack implementation using array
#include<iostream>
using namespace std;
class Stack {
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if((size - top) > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if (top == -1)
            return true;
        else
            return false;
    }
};
int main()
{
    Stack s(5);
    s.push(12);
    s.push(14);
    s.push(16);
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    if(s.isEmpty()){
        cout<<"Stack is empty."<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}