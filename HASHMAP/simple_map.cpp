#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {12,4,2,5,6,7,4,2,5,7};
    map<int, int>mp;

    for(auto it : arr){
        mp[it]++;
    }

    for(auto it:mp){
        cout<<it.first<<" ";
    }

    cout<<endl;

    for(auto it:mp){
        cout<<it.second<<" ";
    }
    return 0;
}