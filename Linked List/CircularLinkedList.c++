#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
    //destructor
    ~Node() {
        int value = this-> data;
        //memeory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data: "<<value<<endl;
    }
};
void insertNode(Node* &tail, int element, int data){
    //empty list
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode-> next = newNode;
    }
    else{
        // non-empty list
        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next; 
        }
        Node* temp = new Node(data);
        temp-> next = curr->next;
        curr -> next = temp;
    }
}
// void print(Node* tail){
//     Node* temp = tail;
//     cout<<tail->data <<" ";

//     while(tail->next != temp){
//         cout<<tail -> data <<" ";
//         tail = tail -> next;
//     }
//     cout<<" ";
// }
void print(Node* tail){
    Node* temp = tail;

    do{
        cout<<tail-> data <<" ";
        tail = tail -> next;
    }while(tail != temp);
    cout<<endl;
}
int main()
{
    Node* tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);
    return 0;
}