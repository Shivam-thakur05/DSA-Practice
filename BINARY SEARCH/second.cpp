#include<iostream>
using namespace std;
int firstoccu(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
      if(arr[mid]==key)
      {
       ans=mid;
       e=mid-1;
      }
     else if(key>arr[mid])
      {
        s=mid+1;
      }
      else{
        e=mid-1;
      }
      mid=s+(e-s)/2;
    }
    
}
int lastoccu(int arr[],int n,int key)
{
  int s=0,e=n-1;
  int mid=s+(e-s)/2;
  int ans=-1;
  while (s<=e)
  {
    if(arr[mid]==key)
    {ans=mid;
    s=mid+1;}
    else if(key>arr[mid])
    {
      s=mid+1;
    }
    else if(key<arr[mid])
    {
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}
int totaloccu(int arr[],int n,int key)
{

}

int main()
{
    int even[6]={6,6,6,6,6,12};
    int odd[5]={2,3,6,8,9};

    cout<<"first occurance is : "<<firstoccu(even,6,6)<<"\t";
    cout<<"last occurance is : "<<lastoccu(even,6,6)<<"\t";
    int a=firstoccu(even,6,6);
    int b=lastoccu(even,6,6);
    int res=b-a+1;
    cout<<"total number of occurance is : "<<res;
    return 0;
}