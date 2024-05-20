#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v){
    int s=0,e=v.size()-1;

    while(s<=e){
     swap(v[s],v[e]);
     s++;
     e--;   
    }
    return v;
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(12);
    v.push_back(14);
    v.push_back(21);
    v.push_back(10);
    cout<<"elements are in the vector are given : ";
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"after swapping elements are : ";
    vector<int> ans=reverse(v);
    display(ans);
    return 0;
}