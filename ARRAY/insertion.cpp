#include<iostream>
using namespace std;

void insertarray(int arr[],int n,int key,int pos){
    for(int i = n - 1; i >= pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = key;
}

void delet(int arr[],int n,int pos){
    for(int i = pos; i < n; i++){
        arr[i] = arr[i+1];
    }
}

void display(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int element,position;
    cout<<"enter positon to insert : ";
    cin>>position;
    cout<<"enter element to be insert : ";
    cin>>element;
    insertarray(arr,n,element,position);
    n++;
    display(arr,n);
    cout<<"after deleting ";
    n--;
    delet(arr,n,position);
    display(arr,n);   
    return 0;
}