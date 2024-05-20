#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cout<<"enter number to convert : ";
        cin >> n;
        cout << convertFive(n) << endl;
    }
}


int convertFive(int n) {

    string s = to_string(n);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0')
        {
            s[i] = '5';
        }
    }
    return stoi(s);
}