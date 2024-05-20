

#include <bits/stdc++.h>
using namespace std;


class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans = ans^arr[i];
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
