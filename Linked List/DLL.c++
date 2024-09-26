#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
};
void printDLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* convertArrDLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* back = head;
    for (int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], NULL, back);
        back->next = temp;
        back = temp;
    }
    return head;
}
Node* deleteHead(Node* head){
    if(head==NULL || head->next == NULL){
        return NULL;
    }
    Node* back = head;
    head = head->next;

    head->prev = NULL;
    back->next = NULL;

    delete back;
    return head;
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArrDLL(arr);
    printDLL(head);
    return 0;
}