#include<iostream>
using namespace std;

int binary_search(int arr[],int s,int e,int key) {
    int mid = s+(e-s)/2;

    if(s>e)
    return false;

    if(arr[mid] == key)
    return true;

    if(arr[mid] < key)
    return  binary_search( arr,mid+1 , e, key);
    else
    return binary_search( arr,s , mid-1, key);

}
// student dashboard post admiss service 

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7, 8 };
    int key;
    cout<<"enter number to find : ";
    cin>>key;
   bool ans = binary_search(arr,0,6,key);

   if(ans)
   cout<<"element found";
   else
   cout<<"not found";
    return 0;
}