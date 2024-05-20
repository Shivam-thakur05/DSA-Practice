#include<iostream>
using namespace std;

int fibb(int n) {

    if(n == 0 || n == 1) 
    return n;
    
    int small = fibb(n-1)+fibb(n-2);
    return small;
}
 
int main()
{
    int n;
    cout<<"enter the nth number : ";
    cin>>n;
    int ans = fibb(n);
    cout<<ans;
    return 0;
}