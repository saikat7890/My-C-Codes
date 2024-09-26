#include<iostream>
#include<vector>
#include<stack>
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
bool palindromeLL(Node* head){
    stack<int> st;
    Node* temp = head;
    while(temp != NULL) {
        st.push(temp->data);
        temp=temp->next;
    }
    while(head != NULL){
        if(head->data != st.top()) {
            return false;
        }
        st.pop();
        head=head->next;
    }
    return true;
}
int main()
{
    vector<int> arr = {4, 7, 12, 7, 4};
    Node* head = NULL;
    for (int i = 0; i < arr.size(); i++){
        insertNode(head, arr[i]);
    }
    if(palindromeLL(head)){
        cout<<"Palindrome LL"<<endl;
    } else {
        cout<<"Not palindrome LL"<<endl;
    }

    

    return 0;
}