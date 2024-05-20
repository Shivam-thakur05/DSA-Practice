#include<iostream>
using namespace std;
int main()
{
    char name[20]="raghav";
    string s="keshav";
    cout<<"name is : "<<name<<endl;
    cout<<"string is : "<<s<<endl;
    name[3]='\0';
    s[3]='\0';
    cout<<"name is : "<<name<<endl;
    cout<<"string is : "<<s<<endl;
    return 0;
}