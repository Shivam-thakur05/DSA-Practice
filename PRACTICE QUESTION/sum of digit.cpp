#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,m;
    cout<<"enter the value of a";
    cin>>n;

    while(n>0){
    m=n%10;
   n=n/10;
    sum=sum+m;
    }
   cout<<"sum of two number:"<<sum;
    return 0;
}