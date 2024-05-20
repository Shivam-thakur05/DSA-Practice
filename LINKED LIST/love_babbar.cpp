#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* dhj;


    Node(int data){
        this->data = data;
        this->dhj = NULL;
    }

};



int main()
{
    //object
    Node* Node1 = new Node(12);
    cout<<Node1->data<<endl<<Node1->dhj<<endl;

    return 0;
}