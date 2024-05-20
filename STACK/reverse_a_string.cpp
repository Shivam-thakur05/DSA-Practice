#include<bits/stdc++.h>
using namespace std;


int main()
{
    stack<char> st;
    string ans;
    cin>>ans;

    for(int i = 0; i < ans.length(); i++) {
        char ch = ans[i];
        st.push(ch);
    }
    
    while (!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    

    return 0;
}