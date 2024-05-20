/*
#include<iostream>
#include<QUEUE>
using namespace std;

void insert_queue(queue<int>q){
	queue<int> ans = q;
	while(!ans.empty()){
		cout<<ans.front()<<" ";
		ans.pop();
	}
}

int main()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout<<"q is : ";
	insert_queue(q);

	queue<int> p;

	p.push(10);
	p.push(20);
	p.push(30);
	p.push(40);
	p.push(50);
	cout<<endl<<"p is : ";
	insert_queue(p);

	q.swap(p);
	cout<<endl<<"after swapping p: ";
	insert_queue(q);
	cout<<endl<<"after swapping q : "<<endl;
	insert_queue(p);
	return 0;
}
*/

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
	deque<int> dq;
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3);
	dq.push_back(4);
	dq.push_back(5);
	
	cout << "Printing dequeue in forward direction : \n";
	for(auto it = dq.cbegin();it!=dq.cend();it++)
	{
		cout << *it << " ";
	}
	
	cout << "\n";
	
	cout << "Printing dequeue in reverse direction : \n";
	for(auto it = dq.crbegin();it!=dq.crend();it++)
	{
		cout << *it << " ";
	}
	
	return 0;
}
