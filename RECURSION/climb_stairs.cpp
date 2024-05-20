#include<iostream>
using namespace std;

int countDistinctWays(int nStairs) {

    // Base case
    if(nStairs < 0) {
        return 0;
    }

    if(nStairs == 0) {
        return 1;
    }

    // Recursive calls without unnecessary 'int' keywords
    int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
    return ans;
}

int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;

    int ans = countDistinctWays(n);
    cout<<"the maximum ways to reach the nth stairs is : "<<ans;
    return 0;
}