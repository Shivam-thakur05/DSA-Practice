#include<iostream>
using namespace std;

int main()
{
    int a=0,b=1,fab,i,n;
    cout<<"enter number";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(i=0;i<n;i++)
    {
        fab=a+b;
        cout<<fab<<" ";
        a=b;
        b=fab;
    }
    
    return 0;
}