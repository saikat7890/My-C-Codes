#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }
    //destructor
    ~Node() {
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next =NULL;
        }
        cout<<"Memory is free for node with data: "<<val<<endl;
    }
};
void print(Node* head){
    while(head != NULL){
        cout<< head->data <<" ";
        head = head-> next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
void insertAtPosition(Node* &head, Node* &tail, int pos, int d){
    if(pos == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count=1;
    while(count < pos-1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;  
}
Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

void insertNode(Node* &head, int data){
    Node* nodeToInsert = new Node(data);
    if(head == NULL) {
        head = nodeToInsert;
    } else {
        Node* temp= head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next = nodeToInsert;
    }
}
Node* constructLL(vector<int> arr){
    int n = arr.size();
    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        insertNode(head, arr[i]);
    }
    return head;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 8);
    insertAtTail(tail, 14);
    insertAtTail(tail, 16);
    insertAtPosition(head, tail, 3, 12);
    print(head);
    deleteTail(head);
    print(head);

    vector<int> arr = {12, 5, 8, 7, 1, 20, 15};
    Node* head2 = constructLL(arr);
    print(head2);
    return 0;
}
