#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
       if(arr[mid]==target){
        return mid;
       }
       else if(arr[mid]>target){
            e=mid-1;
       }
       else{
        s=mid+1;
       }
      mid=s+(e-s)/2; 
    }
    return -1;
}

int main()
{
    int n;
    cout<<"enter size : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
    int element;
    cout<<"\nenter the element : ";
    cin>>element;

    int ans=binary_search(arr,n,element);
    if(ans==(-1)){
        cout<<"element not found in array!";
    }
    else{
        cout<<"element found at index : "<<ans;
    }
    return 0;
}