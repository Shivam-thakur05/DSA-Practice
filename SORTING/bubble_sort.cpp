#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    bool swapped = false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            swapped = true;
        }
        }
        if(swapped == false){
            cout<<"already sorted ";
            break;
        }
    }
}
 void display(int arr[],int n){
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 }

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
    display(arr,n);
    return 0;
}