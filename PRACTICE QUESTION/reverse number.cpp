#include<iostream>
using namespace std;
int main()
{
    int number,remainder,rev_number=0;
    cout<<"enter number";
    cin>>number;

    while(number!=0)
    {
        remainder=number%10;
        rev_number=rev_number*10+remainder;
        number=number/10;
    }
    cout<<"reverse number:"<<rev_number<<endl;
    return 0;
}