//fibonacci sequence of number
#include<iostream>
using namespace std;
void ans(int n)
{
    int num1=0;
    int num2=1;
    int nextnum;
    for(int i=1;i<=n;i++)
    {
        cout<<num1<<endl;
        nextnum=num1+num2;
        num1=num2;
        num2=nextnum;
    }
    return;
}
    int main()
    {
    
        int n;
        cin>>n;
        ans(n);
        return 0;
    }