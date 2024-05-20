// #include<iostream>
// using namespace std;
// void slectionSort(int arr[],int n)
// {
//     for(int i=0;i<=n-1;i++)
//     {
//         int minindex=1;

//         for(int j=i+1;i<=n;i++)
//         {
//             if(arr[j]<arr[minindex])
//             minindex=j;
//         }
//         swap(arr[minindex],arr[i]);
//     }
// }

// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main()
// {
//     int n;
//     cout<<"enter the size of an array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the array element : ";
//     for (int i = 0; i < n; i++)
//     {
//        cin>>arr[i];
//     }
//    slectionSort(arr,n);
//          display(arr,n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
// Function for Selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
 
        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
 
// Driver program
int main()
{
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter array element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    // int arr[] = { 64, 25, 12, 22, 11 };
    // int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}