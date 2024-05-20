#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

string encode(string &message)
{
    string str;
    int i = 0;
    while (i < message.length()) {
        int count = 1;
        // Use while loop instead of for loop
        int j = i + 1;
        while (j < message.length() && message[i] == message[j]) {
            count++;
            j++;
        }
        str += message[i] + to_string(count);
        i = j;  // Update i to the next non-repeating character
    }
    return str;
}
int main(){
    string s;
    cout<<"enter any word : ";
    cin>>s;
    cout<<"ans is : "<<encode(s);
    return 0;
}