#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	char ch;
	fin.open("demo.cpp file");
 
	while(!fin.eof())
	{
	ch=fin.get();
	cout<<ch;
	}
	return 0;
}
