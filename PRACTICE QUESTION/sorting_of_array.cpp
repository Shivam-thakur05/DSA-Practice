#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    //trivesing the array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insertion(int arr[],int n,int element,int position)
{
    if(n>=100)
    {
        cout<<"something error in size!";
    }
    else{
        for(int i=n;i>=position;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[position]=element;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[100],size,element,position;
    cout<<"enter size of an array : ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
     display(arr,size);
    cout<<"enter position to insert element  : ";
    cin>>position;
    cout<<"enter element : ";
    cin>>element;
    size=size+1;
    insertion(arr,size,element,position);
    return 0;
}