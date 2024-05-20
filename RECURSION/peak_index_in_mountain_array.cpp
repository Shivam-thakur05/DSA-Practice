#include<iostream>
using namespace std;

int mountain(int arr[],int s,int e,int size) {
    int mid = s + (e-s)/2;

    //base case
    if(s>e) {
        return 0;
    }

    if(arr[mid]<arr[mid+1]) {
        mountain(arr,mid+1,e,size);
        return s;
    }
    else {        
        mountain(arr,s,mid,size);
        return e;
    }
    
}


int main()
{
    int arr[] = {1,2,3,4,6,4,5,2};
    int size = 8;
    int ans = mountain(arr,0,7,8);
    cout<<"ans is : "<<ans;
    return 0;
}