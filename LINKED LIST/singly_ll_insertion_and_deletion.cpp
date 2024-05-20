#include<iostream>
using namespace std;

class Node{ 
    public:
    int data;
    Node* next;
    //contructor
    Node(int val) {
        this -> data = val;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    cout<<"memory is free for node with data "<<value<<endl;
    }

    public:
    void ram(int a,int b){
        a = data;
    }
};

void insert_at_head(Node* &head, int d) {
    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    //update the head
    head = temp;
}

void insert_at_tail(Node* &tail, int d){
    
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    //tail = tail -> next;
}

void insert_at_position(Node* &tail,Node* &head,int position,int d){

    //insert at fist position
    if(position == 1) {
        insert_at_head(head,d);
        return;
    }

    //inserting at last position
    if(head -> next == NULL){
        insert_at_tail(tail,d);
        return;
    }
    
    //else we create  a node and insert at given postion 
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    Node* node_to_insert = new Node(d);
    node_to_insert -> next = temp -> next;
    temp -> next = node_to_insert;

}
   
void delete_node(Node* &head,int position) {
    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free because node is present in heap
        temp -> next = NULL;
        delete temp;

    }
    else{
        Node* current = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position) {
            prev = current;
            current = current -> next;
            cnt++;
        }
        prev -> next = current -> next;
        current -> next = NULL;
        delete current;
    }
}
//traverse the function
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    //for dynmic object we use -> inside the .
    //node1->ram(2,3);
    insert_at_head(head,12);
    // insertathead(head,3);
    // insertathead(head,4);
    insert_at_head(head,15);
    print(head);
    insert_at_tail(tail,16);
    print(head);
    insert_at_position(tail,head,3,22);
    print(head);
    cout<<endl<<"head is: "<<head->data<<endl;
    cout<<endl<<"tail is: "<<tail->data<<endl;

    delete_node(head,2);
    print(head);

//hw last node ko delte krne pr garbage value aa rha hai isey shi krna hai
    return 0;
}