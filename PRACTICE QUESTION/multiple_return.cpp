//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {int count1=0,count2=0,count3=0,count4=0;
           for(int i=0;i<s.length();i++){
               if(s[i]>='A'&&s[i]<='Z'){
                   count1++;
               }
               else if(s[i]>='a'&&s[i]<='z'){
                   count2++;
               }
               else if(s[i]>='0'&&s[i]<='9'){
                   count3++;
               }
               else{
                   count4++;
               }
           }
           return {count1,count2,count3,count4};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends