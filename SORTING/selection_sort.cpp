#include<iostream>
using namespace std;

void slectionSort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int minindex=1;

        for(int j=i+1;i<=n;i++)
        {
            if(arr[j]<arr[minindex])
            minindex=j;
        }
        swap(arr[minindex],arr[i]);
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
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
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
   slectionSort(arr,n);
   display(arr,n);
    return 0;
}