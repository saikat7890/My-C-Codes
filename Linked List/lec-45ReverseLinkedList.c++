#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail  = tail->next;
}
//Using 3 pointer
Node* reverseLinkedList(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;  //for storing the remaining list
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;  //connecting backward
        prev = curr;
        curr = forward;
    }
    return prev;
}
//Recursive solution
// void reverse(Node* &head, Node* curr, Node* prev){
//     //base case
//     if(curr == NULL){
//         head = prev;
//         return;
//     }

//     Node* forward = curr->next;
//     reverse(head, forward, curr);
//     curr->next = prev;
// }
// Node* reverseLinkedList(Node* head){
//     Node* curr = head;
//     Node* prev = NULL;
//     reverse(head,curr, prev);
//     return head;
// }

//Recursive solution
// Node* reverseLinkedList(Node* head){
//     if(head == NULL || head->next == NULL){
//         return head;
//     }
//     Node* newHead = reverseLinkedList(head->next);
//     Node* front = head->next;
//     front->next = head;
//     head->next = NULL;
//     return newHead;
// }
//Middle of the Node
int middleNode(Node* head){
    //count node
    Node* temp = head;
    int len=0;
    while (temp != NULL){
        len++;
        temp = temp->next;
    }
    temp = head;
    for (int i = 0; i < len/2; i++){
        temp = temp->next;
    } 
    return temp->data;
}

// Tortoise-Hare-Approach
// int middleNode(Node* head){
//     Node* slow = head;
//     Node* fast = head;
//     while (fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow->data;
// }
int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail, 12);
    insertAtTail(tail, 14);
    insertAtTail(tail, 16);
    insertAtTail(tail, 18);
    print(head);

    Node* reversedList = reverseLinkedList(head);
    print(reversedList);
    // Node* midNode = middleNode(head);
    cout<<"Middle of the Node: "<<middleNode(head)<<endl;

    return 0;
}