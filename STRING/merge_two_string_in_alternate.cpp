#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}



string merge (string S1, string S2)
{
    string ans="";
    int n=S1.length();
    int m=S2.length();
    
    int i=0,j=0;
    while(i<n && j<m){
        ans.push_back(S1[i++]);
        ans.push_back(S2[j++]);
    }
    
    while(i<n){
        ans.push_back(S1[i++]);
    }
    
    while(j<m){
        ans.push_back(S2[j++]);
    }
    return ans;
}

