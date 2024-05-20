#include<iostream>
using namespace std;
int main()
{
    int n,arr[20]={1,2,3,4,5};
    // cout<<"enter number : ";
    // cin>>n;

    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    int pos,ele;
    cout<<"enter position to insert element : ";
    cin>>pos;
    cout<<"enter element which you insert : ";
    cin>>ele;

    for(int i=5;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=ele;
    for(int i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}