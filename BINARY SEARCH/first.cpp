#include<iostream>
using namespace std;

int result(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;    
    while(start<=end)
    {
        if(arr[mid]==key)
        {return mid;}

         if(key>arr[mid])
        {
           start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    // int even[6]={2, 4, 6, 8, 12, 34};
    // int odd[5]={3,5,6,7,8};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cin>>element;
   int index=result(arr,n,element);
   cout<<" found at index : "<<index;
    return 0;
}