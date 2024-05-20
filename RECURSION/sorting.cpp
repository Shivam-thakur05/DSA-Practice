#include<iostream>
using namespace std;

void sorting(int &arr,int n) {
    
    //base case
    if(n == 0 || n == 1)
    return;

    sorting(arr,n-1);
}

int main()
{
    int arr[5] = {12,23,11,2,3};
    int size = 5;
    sorting(arr,size);
    for(int i = 0; i < 5; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}