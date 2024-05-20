#include <iostream>
using namespace std;
class node{
    public:
        int data;
        class node *previous;
        class node *next;
    // node()
    // {
    //     data=0;
    //     next=NULL;
    //     previous = NULL;
    // }
    node(int data)
    {
        this->data = data;
        this->next= NULL;
        this->previous = NULL;
    }
};
class doublyLinkedlist
{
private:
    node* head;
    node* tail = NULL;
public:
    // Default constructor
    doublyLinkedlist()
    {
        head = NULL;
    }
    void insertNode(int);
    void searchNodeData(int);
    void deleteSpcificValue(int);
    void InsertAfterSpcificNode(int, int);
    void display();
};

void doublyLinkedlist::insertNode(int data)
{
    node* newNode = new node(data);
    newNode->data = data;

    //If list is empty
    if(head == NULL) {
        //Both head and tail will point to newNode
        head =  newNode;
        tail = newNode;
        //head's previous will point to NULL
        head->previous = NULL;
        //tail's next will point to NULL, as it is the last node of the list
        tail->next = NULL;
    }
    else {
        //newNode will be added after tail such that tail's next will point to newNode
        tail->next = newNode;
        //newNode's previous will point to tail
        newNode->previous = tail;
        //newNode will become new tail
        tail = newNode;
        //As it is last node, tail's next will point to NULL
        tail->next = NULL;
    }
}

void doublyLinkedlist:: display() {
    //Node current will point to head
    class node *current = head;
    if(head == NULL) {
        cout<<"List is empty\n";
        return;
    }
    cout<<"Nodes of doubly linked list: \n";
    while(current != NULL) {
        //Prints each node by incrementing pointer.
        cout<<current->data <<" ";
        current = current->next;
    }
}

void doublyLinkedlist::searchNodeData(int data)
{
    class node *current = head;
    int flg=0;
    int count=0;
    if(head == NULL) {
        cout<<"List is empty\n";
        return;
    }
    cout<<"Nodes of doubly linked list: \n";
    while(current != NULL) {

        if(current->data == data)
        {
            flg=1;
            break;
        }
        //cout<<current->data <<" ";
        current = current->next;
        count+=1;
    }
    if(flg==1)
    {
        cout<<"Value Found at : "<< count+1 << " Node";
    }
    else
        cout<<"Not Found";

}

void doublyLinkedlist:: deleteSpcificValue(int val)
{
    class node *current = head;

    //cout<<current->data;
    //cout<<current->next->data;
    //cout<<current->next->next->data;
    //cout<<current->next->next->next->data;
    while ( current != NULL && current->data != val )
    {
        current = current->next;
    }
    //cout<<current->data;
    bool success = current != NULL;
    if (success)
    {
        if ( current->next != nullptr )
        {
            current->next->previous = current->previous;
        }
        if ( current->previous != nullptr )
        {
            current->previous->next = current->next;
        }
        else
        {
            head = current->next;
        }
        delete current;
    }
    else
        cout<<"Not Found"<<endl;
}

void doublyLinkedlist:: InsertAfterSpcificNode(int pos, int val)
{
    class node *current = head;
    int count=0;
    node* newNode = new node(val);
    newNode->data = val;

    //cout<<current->data;
    //cout<<current->next->data;
    //cout<<current->next->next->data;
    //cout<<current->next->next->next->data;

    while(current != NULL) {

        if(count==pos-1)
        {
            //cout<<current->data <<" ";
            break;
        }
        current = current->next;
        count++;
    }
    cout<<current->data;

    if(pos == 1) {
        head =  newNode;
        tail = newNode;
        head->previous = NULL;
        tail->next = current;
    }
    else{
      newNode->next = current->next;
      newNode->previous = current;

      current->next = newNode;
    }

}



int main()
{
    doublyLinkedlist list;
    //Add nodes to the list
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);

    //Displays the nodes present in the list
    //list.display();
    //list.searchNodeData(3);
    //list.deleteSpcificValue(3);
    //list.display();
    list.InsertAfterSpcificNode(2, 44);
    list.display();
    return 0;
    }

