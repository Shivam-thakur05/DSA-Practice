#include<iostream>
using namespace std;
int main()
{
    int arr[100],size,element,position;
    cout<<"enter the size of an array : ";
    cin>>size;
    cout<<"enter the array element : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the position to insert element : ";
    cin>>position;
    cout<<"enter element to insert in array : ";
    cin>>element;
    
    for(int i=2;i<element-1;i++)
    {
        if(element%arr[i]==0)
        {
            cout<<"entered number is not prime number!";
            return 0;
        }
    }

    for(int i=size;i>position;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position]=element;

    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}