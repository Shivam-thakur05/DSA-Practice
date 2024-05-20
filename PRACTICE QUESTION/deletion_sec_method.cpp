#include<iostream>
using namespace std;
int main()
{
    int arr[100],position,del,size;
    cout<<"enter size of an element : ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"enter position to delete : ";
    cin>>position;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==del)
        {
            position=i;
            break;
        }
        
    }
    for(int i=position;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<size-1;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}