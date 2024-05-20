#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){

//first index is sorted so start the loop with i = 1
    for(int i = 1; i < n; i++){
        //store the ith element in temp for comparing all elements
        int temp = arr[i];
        //
        int j = i-1;
        //start the loop in reverse order for i-1 to 0 
        for(j = i-1; j >= 0; j--){
            if(arr[j] > temp){
                //shift the small element in right place
                arr[j+1] = arr[j];
            }
            else{
                //already in right place then break the current loop
                break;
            }
        }
        //store the element in right order
        arr[j+1] = temp;
    }
}

 void display(int arr[],int n){
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
    cout<<"enter the array element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"before sorting : "<<endl;
    display(arr,n);
    insertion_sort(arr,n);
    cout<<endl<<"after sorting : "<<endl;
    display(arr,n);
    return 0;
}