#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n); // Initialize the vector with size n
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Input values into arr
    }
    
    // Process to find the next greater element
    vector<int> ans(n); // Initialize the answer vector with size n
    stack<int> s;

    for(int i = n - 1; i >= 0; i--) {
        while(!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if(s.empty()) {
            ans[i] = -1; // No greater element found
        } else {
            ans[i] = s.top(); // Next greater element found
        }
        s.push(arr[i]); // Push the current element onto the stack
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " "; // Output the result
    }
    cout << endl; // Add a newline at the end
    return 0;
}
