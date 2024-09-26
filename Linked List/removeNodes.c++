//singly linked list
//constructing linked list from an array
//reemove from every position in a linked list
#include<iostream>
#include<vector>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
void insertNode(Node* &head, int data){
    Node* nodeToInsert = new Node(data);
    if(head == NULL){
        head = nodeToInsert;
    } else {
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = nodeToInsert; 
    }
}
//constructing linked list from an array
Node* constructLL(vector<int> arr) {
    int n=arr.size();
    Node* head = NULL;
    for(int i=0; i<n; i++){
        insertNode(head, arr[i]);
    }
    return head;
}

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
Node* deleteTail(Node* head) {
    if (head == NULL || head->next == NULL)
        return NULL;
    Node* temp = head;
    while (temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}
Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node* deleteAtPos(Node* head, int k){
    if(head == NULL) return head;
    if(k==1){
        return deleteHead(head);
    }
    int count=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp != NULL){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node* deleteAtVal(Node* head, int ele){
    if(head == NULL) return head;
    if(head->data == ele){
        return deleteHead(head);
    }
    
    Node* temp=head;
    Node* prev=NULL;
    while(temp != NULL){
        
        if(temp->data == ele){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main() {
    vector<int> arr = {12, 5, 8, 7, 1, 20, 15};
    Node* head = constructLL(arr);
    printLL(head);cout<<endl;
    
    head = deleteHead(head);
    printLL(head);cout<<endl;
    head = deleteTail(head);
    printLL(head);cout<<endl;
    head = deleteAtPos(head, 4);
    printLL(head);cout<<endl;
    head = deleteAtVal(head, 8);
    printLL(head);cout<<endl;
}
