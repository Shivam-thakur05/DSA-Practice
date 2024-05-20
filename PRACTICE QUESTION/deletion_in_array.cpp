#include<iostream>
using namespace std;
int main()
{
    int n,arr[20],del,pos;
    cout<<"enter size of array : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]==del)
    //     {
    //         pos=i;
    //         break;
    //     }
    // }

    cout<<"enter position to delete an element : ";
    cin>>pos;
    

    for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }

    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;

}