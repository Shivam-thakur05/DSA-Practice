#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int sort012(int arr[], int n)
{
int i = 0, j = 0, k = n-1;
   while( i <= k ) {
      if( arr[i] == 0 ) {
         swap( arr[i], arr[j] );
         i++;
         j++;
      } else if( arr[i] == 1 ) {
         i++;
      } else {
         swap(arr[i], arr[k]);
         k--;
      }
   }
}

void display(int arr[],int n)
{
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
    cout<<"enter array element : ";
    for(int i:arr)
    {
        cin>>arr[i];
    }
    sort012(arr,n);
    display(arr,n);
    return 0;

}

//    int zero=0,one=0,two=0;
//    for(int i=0;i<n;i++)
//    {
//       if(arr[i]==0)
//       zero++;
//       else if(arr[i]==1)
//       one++;
//       else 
//       two++;
//    }
//   for(int i=0;i<zero;i++)
//   {
//      arr[i]=0;
//   }
//   for(int i=0;i<zero+one;i++)
//   {
//      arr[i]=1;
//   }
//   for(int i=0;i<zero+one+two;i++)
//   {
//      arr[i]=2;
//   }
// }