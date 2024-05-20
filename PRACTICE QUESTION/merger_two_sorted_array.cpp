#include<iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    //function that merge two sorted array in one sorted array
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
//copy of first array element in 3rd array
while(i<n)
{
    arr3[k]=arr1[i];
    k++;
    i++;
}
while(j<m)
{
    arr3[k]=arr2[i];
    k++;
    j++;
}
}

void display(int ans[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    display(arr3,8);

    return 0;
}