#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long sum=0;
        int left =0;
        for(int i=0;i<n;i++)
        {
            sum = sum+arr[i];
            while(sum> s && i>left)
            {
                sum = sum-arr[left];
                left = left+1;
            }
            if(sum == s)
            {
                return {left+1,i+1};
        
            }
        }
        
        return{-1};
    }
};


int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
