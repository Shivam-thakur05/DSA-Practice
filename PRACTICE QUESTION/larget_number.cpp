#include<iostream>
using namespace std;
int find_largest(int nmbr[],int n)
{
    return 0;
}
int main()
{
    int nmbr[]={12,53,42,25,16};
    int n=sizeof(nmbr)/sizeof(nmbr[0]);
    cout<<"original element:";
    for(int i=0;i<n;i++)
    cout<<nmbr[i]<<" ";
    cout<<"largest number in the array is:"<<find_largest(nmbr,n);
    return 0;
}