/* #include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        this->data=val;
        this->next=NULL;
    }
};
void insertathead(node*&head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;
}
void deleteatnode(node*&head){
     // node*n=new node(val);
      node*temp=head;
      if(head==NULL){
        return;
      }
      else{
        temp=head;
        head=head->next;
        temp->next = NULL;
      }
      free(temp);
}
    
void display(node*&head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<"NULL";
}

int main()
{
    node*head=NULL;
    insertathead(head,2);
    insertathead(head,3);
    insertathead(head,4);
    insertathead(head,5);
    display(head);
    cout<<"\n after deleting node : "<<endl;
    deleteatnode(head);
    display(head);
    return 0;
}
*/
#include <iostream>

using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        this->data = val;
        this->next = NULL;
    }
};

void insertathead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

void deleteatnode(node* &head) {
    if (head == NULL) {
        return;  // Handle empty list case
    }

    node* temp = head;
    head = head->next;
    free(temp);
}

void display(node* &head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    //cout << "NULL";
}

int main() {
    node* head = NULL;
    insertathead(head, 2);
    insertathead(head, 3);
    insertathead(head, 4);
    insertathead(head, 5);

    display(head);
    display(head);
    cout << "\n after deleting node : " << endl;
    //deleteatnode(head);
    display(head);

    return 0;
}
