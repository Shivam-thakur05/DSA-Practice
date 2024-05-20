#include<iostream>
using namespace std;

void sayDigit(int n,string arr[]) {
    //base case
    if(n == 0)
    return;

    int digit = n%10;
    n = n/10;

    cout<<arr[digit]<<" ";
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}

int main()
{
    string number[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"enter the number : ";
    cin>>n;

    sayDigit(n,number);

    // while(n>0) {
    //     int rem = n%10;
    //     cout<<number[rem]<<" ";
    //     n = n/10;
    // }
    return 0;
}