#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,1,4,2,1,3};

    map<int,int>mp;
    for(int i = 0; i < 7; i++) {
        mp[arr[i]] += 1;
    }
    cout<<mp[1]<<endl;
    return 0;
}