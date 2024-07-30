class Solution{
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) { 
	    vector<int>ans;
	    unordered_map<int,int>mp;
	    
	    for(int i = 0; i < m; i++){
	        mp[b[i]]++;
	    }
	    
	    for(int i = 0; i < n; i++){
	        if(mp.find(a[i]) != mp.end()){
	            continue;
	        }
	        else{
	            ans.push_back(a[i]);
	        }
	    }
	    return ans;
	}
};
