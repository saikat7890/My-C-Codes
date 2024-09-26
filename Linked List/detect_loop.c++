#include <iostream>
#include <bits/stdc++.h>
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
        next = NULL;
    }
};

// function to detect loop in linked list using hash map
// bool detectLoop(Node* head) {
//     Node* temp = head;  
//     unordered_map<Node*, int> nodeMap;  

//     while (temp != NULL) {
//         if (nodeMap.find(temp) != nodeMap.end()) {
//             return true;
//         }
//         nodeMap[temp] = 1;
//         temp = temp->next;
//     }
//     return false;
// }
// function to detect loop in linked list using tortoise and hare method
bool detectLoop(Node *head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
//Function to find the starting point of the loop using maps
// Node* findStart(Node* head){
//     Node* temp = head;
//     unordered_map<Node*, int> nodeMap;
//     while(temp != NULL){
//         if(nodeMap.find(temp) != nodeMap.end()){
//             return temp;
//         }
//         nodeMap[temp] = 1;
//         temp = temp->next;
//     }
//     return NULL;
// }
//Function to find the starting point of the loop using tortoise and hare method
Node* findStart(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            slow = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
//Finding length of the loop using hash map
// int lengthOfLoop(Node *head) {
//     Node* temp = head;
//     unordered_map<Node*, int>nodeMap;
//     int timer = 1;
//     while(temp!=NULL){
//         if(nodeMap.find(temp) != nodeMap.end()){
//             int value = nodeMap[temp];
//             return timer-value;
//         }
//         nodeMap[temp]=timer;
//         timer++;
//         temp=temp->next;
//     }
//     return 0;
// }
//Finding length of the loop using tortoise & hare
int findLength(Node* fast, Node* slow){
    int count=1;
    fast=fast->next;
    while(fast != slow){
        count++;
        fast=fast->next;
    }
    return count;
}
int lengthOfLoop(Node *head) {
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return findLength(fast, slow);
        }
    }
    return 0;
}
int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    Node* sixth = new Node(6);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
     // Create a loop
    sixth->next = third;

    if (detectLoop(head)) {
        cout << "Loop detected in the linked list." << endl;
        Node* stPoint = findStart(head);
        cout<< "The starting point of the loop is: "<<stPoint->data<<endl;
        cout<<"The length of the loop is: "<<lengthOfLoop(head)<<endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}

