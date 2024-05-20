#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void movezeros(vector<int> v){
int nonzero=0;

for(int j=0;j<v.size();j++)
{
    if(v[j]!=0){
        swap(v[j],v[nonzero]);
        nonzero++;
    }
}
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int> v;
    //vector<int>ans;
    v.push_back(1);
    v.push_back(0);
    v.push_back(5);
    v.push_back(0);
    v.push_back(0);
    v.push_back(7);
    cout<<"elements are in the vector are given : ";
    for(int i:v)
    {
        cout<<i<<" ";
    }
    
   vector<int>ans=movezeros(v);
    display(ans);
    return 0;
}