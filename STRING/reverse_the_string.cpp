#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"enter the string : ";
    char ch;
    cin>>s;
    cout<<"enter the char to reverse : ";
    cin>>ch;

    string ans = "";
   for(int i = 0; i < s.length(); i++) {
        if(s[i] == ch){
            int temp = i;
            for(int j = 0; j <= temp; j++) {
                swap(s[j++],s[temp--]);
            }
        }
   }
    cout<<s;
    return 0;
}