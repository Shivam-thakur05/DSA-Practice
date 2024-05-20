#include<iostream>
using namespace std;

int fact(int n) {
    if(n==0) {
        return 1;

    }

    int smallnumber = fact(n-1);
    int largenumber = smallnumber * n;

    return largenumber;
}

int main()
{
    int number;
    cout<<"enter the number : ";
    cin>>number;
    
    int ans = fact(number);
    cout<<"factorial of given number is : "<<ans<<endl;
    return 0;
}