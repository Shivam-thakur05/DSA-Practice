#include<iostream>
using namespace std;
int max_min(int arr[],int n){
    int max=0;
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i])
        max=arr[i];
        else if(min>arr[i])
        min=arr[i];
    }
    return max;
    return min;
}

int main()
{
    int arr[3]={8,15,12};
    int n=3;
    int s=max_min(arr,3);
    cout<<s;
    return 0;
}