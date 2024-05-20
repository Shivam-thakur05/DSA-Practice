//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        
        // vector<int>ans;
        // for(int i=0;i<n;i++){
        //     int index=arr[i]%n;
        //   arr[index]+=n;
        // }
        //  for(int i=0;i<n;i++){
        //      if((arr[i]/n)>=2){
        //         ans.push_back(i);
        //      }
        //  }
        //  if(ans.size()==0)
        //      return {-1};
        //  return ans;
         
         
    //      sort(arr,arr+n);
    //     set<int> s;
    //     for(int i=0;i<n-1;i++)
    //     {
    //         if(arr[i]==arr[i+1]){
    //             s.insert(arr[i]);
    //             i++;
    //         }
    //     }
    //     vector<int> v(s.begin(),s.end());
    //     if(!v.size())
    //         return {-1};
    //     return v;
    // }
    
    // vector<int>ans;
    // sort(arr,arr+n);
    //     for(int i=1;i<n;i++)
    //     {
    //         if(arr[i]==arr[i-1] && arr[i]!=arr[i+1])
    //         {
    //             ans.push_back(arr[i]);
    //         }
    //     }
    //     if(ans.empty())
    //     {
    //         return {-1};
    //     }
    //     return ans;
    // }
    
    
// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> arr = {1, 2, 3, 4, 2, 5, 6, 3, 7};
//     int n = arr.size();
    
//     std::cout << "Duplicates in the array are: ";
    
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 std::cout << arr[i] << " ";
//                 break;  // Break to avoid printing duplicates multiple times
//             }
//         }
//     }

//     std::cout << std::endl;

//     return 0;
// }
    }  
};


//{ Driver Code Starts.
int main() {
    
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    
    return 0;
}

// } Driver Code Ends