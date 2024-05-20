#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
// void display(int arr[],int n){
    
// }

int main()
{
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    return 0;
}