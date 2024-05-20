#include<iostream>
using namespace std;

bool linear_search(int arr[],int n,int key) {
    //base case
    if(n == 0) 
    return false;

    if(arr[0] == key)
    return true;

    else{
        bool remaining = linear_search(arr+1,n-1,key);
        return remaining;
    }
}

int main()
{
    int arr[5] = {3,6,5,8,2};
    int key = 6;
    bool ans = linear_search(arr,5,key);

    if(ans)
    cout<<"element found in array ";
    else
    cout<<"not found!";
    return 0;
}