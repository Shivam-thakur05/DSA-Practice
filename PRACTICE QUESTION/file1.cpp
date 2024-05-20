//how to write in file

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("second file");
    file<<"wecome to my new home";
    if(!file)
    {
        cout<<"file not created:";
    }
    else
    {
        cout<<"file is successfully created:";
    }
    file.close();
    return 0;
}