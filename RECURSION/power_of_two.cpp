#include<iostream>
using namespace std;

int power(int n) {
    if(n == 0) {
        return 1;
    }
    int small = power(n-1);
    int large = 2*power(n-1);
    return large;
}

int main()
{
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans;
    return 0;
}