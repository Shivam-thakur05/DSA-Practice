#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1,j=0;
    while(i<n){
        cout<<" ";
        i++;
        while(j<i){
            cout<<"*"<<"\t";
            j++;
        }
        cout<<"\n";

    }
    return 0;
}