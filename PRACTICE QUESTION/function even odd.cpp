#include<iostream>
using namespace std;
void number1(int number)
{
    if(number%2==0)
    {
        cout<<"number is even";
    }
    else
    {
        cout<<"number is odd";
    }  
}
int main()
{
    int number;
    cout<<"enter number : ";
    cin>>number;
    number1(number);
    return 0;
}
    