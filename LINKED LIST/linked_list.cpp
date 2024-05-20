#include <iostream>
using namespace std;

struct node
{
int data;
struct node *next;
}
*start=NULL,*nn,*temp;
void insert_beg(int x)
{
nn = new node;
nn->data=x;
if(start==NULL)
{
start=nn;
nn->next=NULL;
}
else
{
nn->next=start;
start=nn;
}
}

void traverse()
{
temp=start;
while(temp!=NULL)
{
cout<<"NODE ADDRESS\t" <<temp <<"\t NODE DATA \t"<<temp->data<<"\t NODE NEXT PART\t"<<"->"<<temp->next<<endl;
temp=temp->next;
}
}

int main()
{
insert_beg(10);
insert_beg(20);
insert_beg(30);

traverse();
return 0;
}