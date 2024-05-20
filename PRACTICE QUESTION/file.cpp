#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("demo.cpp file");

    //write somthing in file 
    fout<<"//welcome to c++ file"<<endl;
    fout<<"my  name is shivam and this is  my file";
    return 0;
    //we can use cout as well
    //cout<<"welcome to c++ file";
}