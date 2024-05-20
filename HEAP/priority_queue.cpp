#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;
    pq.push(8);
    pq.push(5);
    pq.push(6);
    pq.push(2);
    pq.push(1);
    pq.push(9);

    cout<<pq.size()<<endl;
    cout<<"top element is : "<<pq.top()<<endl;
    cout<<"is pq empty "<<(pq.empty())<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    return 0;
}