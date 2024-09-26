#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev; 
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    } 
    ~Node(){
        int value = this -> data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with"<< value <<endl;
    }
};
//traversing a linked list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//gives length of Linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node* &head, Node* &tail, int data){
    //empty list
    if (head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp -> next = head;
        head->prev = temp;
        head = temp;
    }
}
// void insertAtHead(Node* &head, int data){
//     Node* temp = new Node(data);
//     temp -> next = head;
//     head->prev = temp;
//     head = temp;
// }

void insertAtTail(Node* &head, Node* &tail, int data){
    if (tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        tail -> next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
// void insertAtTail(Node* &tail, int data){
//     Node* temp = new Node(data);
//     tail -> next = temp;
//     temp->prev = tail;
//     tail = temp;
// }
void insertAtPosition(Node* &head, Node* &tail,int position, int data){
    if(position == 1){
        insertAtHead(head,tail, data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    if(temp -> next == NULL){
        insertAtTail(head,tail, data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next =  temp -> next;
    temp-> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}
void deleteNode(int position, Node* &head){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp -> next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* previous = NULL;

        int count = 1;
        while(count < position){
            previous = curr;
            curr = curr ->next;
            count++;
        }

        //deleting
        curr->prev = NULL;
        previous->next = curr->next;
        curr->next = NULL; //beacuse of destructor code
        delete curr;
    }
}
int main()
{
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout<<"Length: "<<getLength(head)<<endl;

    insertAtHead(head,tail, 5);
    print(head);
    cout<<"Head "<<head->data <<endl;
    cout<<"Tail "<<tail->data <<endl;

    insertAtTail(head,tail, 20);
    print(head);
    cout<<"Head "<<head->data <<endl;
    cout<<"Tail "<<tail->data <<endl;

    insertAtPosition(head,tail, 1, 40);
    print(head);
    cout<<"Head "<<head->data <<endl;
    cout<<"Tail "<<tail->data <<endl;

    insertAtPosition(head, tail, 4, 15);
    print(head);
    cout<<"Head "<<head->data <<endl;
    cout<<"Tail "<<tail->data <<endl;

    insertAtPosition(head,tail, 3, 25);
    print(head);
    cout<<"Head "<<head->data <<endl;
    cout<<"Tail "<<tail->data <<endl;

    deleteNode(1, head);
    print(head);
    cout<<"Head "<<head->data <<endl;
    cout<<"Tail "<<tail->data <<endl;
    return 0;
}