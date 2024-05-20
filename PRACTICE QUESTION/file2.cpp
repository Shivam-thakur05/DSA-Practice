//how to read file 

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("second file",ios::in);
    char ch;
    while(!file.eof())
    {
        ch=file.get();
        cout<<ch;
    }
    return 0;

}