#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,1,4,2,1,3};
    string name = "shiivaam";

    unordered_map<char,int>mp;

    for(int i = 0; i < name.length(); i++) {
        mp[name[i]] += 1;
    }
    // for(int i = 0; i < mp.size(); i++){
    //     cout<<mp[arr[i]]<<endl;
    // }

    for(auto it:mp){
        cout<<it.first<< "->" <<it.second<<endl;
    }
    
    return 0;
}