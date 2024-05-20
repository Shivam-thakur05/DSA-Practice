#include<iostream>
using namespace std;

void reverse(string &s) {
    int st = 0, e = s.length()-1;
    while(st <= e)
    {
        swap(s[st],s[e]);
        st++;
        e--;
    }
}

int main()
{
    string name = "ram";
    reverse(name);
    cout<<name<<endl;
    return 0;
}