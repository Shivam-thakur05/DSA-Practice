#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elementv : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target to be found : ";
    cin>>target;
    int ans=linear_search(arr,n,target);
    if(ans==(-1)){
        cout<<"element not found in array!";
    }
    else{
        cout<<"target found at index : "<<ans;
    }
    return 0;
}