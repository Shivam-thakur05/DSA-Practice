#include<iostream>
using namespace std;

int deletion(int arr[],int n,int key)
{
    int del;
    for(int i=2;i<n;i++)
    {
        if(arr[key]%arr[i]==0)
        break;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==del)
        {
            key=i;
            break;
        }
        
    }
    for(int i=key;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int arr[100],n,position;
    cout<<"enter the size of an array : ";
    cin>>n;
    cout<<"enter the element in array : ";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"enter position to delete element : ";
    cin>>position;

    deletion(arr,n,position);
    printarray(arr,n);

    return 0;
}