#include<iostream>
using namespace std;

int sum(int arr[],int size){
    //base case
    if(size == 1){
        return arr[0];
    }

    int ans = arr[size-1]+sum(arr,size-1);
    
    return ans;
}

int main()
{
    int arr[] = {2,5,8,5,6};
    int size = 5;
    int ans = sum(arr,5);
    cout<<"the sum of array elements is : "<<ans;
    return 0;
}