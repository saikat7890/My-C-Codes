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
    // destructor
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
void print(Node* &head){ 
    Node* temp = head;    //Assining head of linked list to temp node
    while (temp != NULL) {
        cout<< temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
void insertAtHead(Node* &head, int data){
    //new node created
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);

    tail->next = temp;
    tail = tail->next;
}
void insertAtposition(Node* &head, Node* &tail, int position,  int d){
    //insert at first
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count=1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return ;
    }
    //Creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;
}
void deleteNode(int position, Node* &head){

    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free start node
        temp->next = NULL; //beacuse of destructor code
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr ->next;
            count++;
        }

        //deleting
        prev->next = curr->next;
        curr->next = NULL; //beacuse of destructor code
        delete curr;
     }
}
Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main()
{
    //Creatig a new Node
    Node* node1 = new Node(10);
    // cout<<"Data "<< node1 -> data <<endl;
    // cout<< "Next pointer "<<node1 -> next <<endl;

    Node* head = node1; //Head pointed to node1
    Node* tail = node1; //Tail pointed to Tail
    print(head);
    insertAtHead(head, 12);
    insertAtTail(tail, 15);
    insertAtposition(head,tail, 3, 20);
    print(head);
    
    insertAtposition(head,tail, 4, 22);
    print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    deleteNode(3, head);
    print(head);
    return 0;
}