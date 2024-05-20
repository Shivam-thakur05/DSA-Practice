#include<iostream>
using namespace std;

void sortArray(int arr[],int n) {

    //base case
    if(n == 0 || n == 1)
    return;

    //bubble sort algo which replace (n-1)th element into right place
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1])
        swap(arr[i],arr[i+1]);
    }

    //recursive function
    sortArray(arr,n-1);
}

int main()
{
    int arr[] = {9,5,8,3,6,2};

    sortArray(arr,6);

    for(int i = 0; i < 6; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}