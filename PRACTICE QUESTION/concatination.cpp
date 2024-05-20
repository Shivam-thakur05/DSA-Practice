#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,pos,del;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>del;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==del)
        {
            i=pos;
            break;
        }
        arr[i+1]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}