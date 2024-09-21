#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &arr, int target) {
    if (arr.size() == 0 || arr[arr.size() - 1] <= target) {
        arr.push_back(target);
        return;
    }
    int val = arr[arr.size() - 1];
    arr.pop_back();
    insert(arr, target);
    arr.push_back(val);
}

void sort(vector<int> &arr) {
    if (arr.size() <= 1) {
        return;
    }
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sort(arr);
    insert(arr, temp);
}

int main()
{
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}