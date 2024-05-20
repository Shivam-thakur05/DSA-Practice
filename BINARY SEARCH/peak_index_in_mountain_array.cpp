#include<iostream>
using namespace std;
int peak(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        } 
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main()
{
    int arr[6]={1,4,7,18,15,3};
    int res=peak(arr,6);
    cout<<"peak element index is : "<<res;
    return 0;
}