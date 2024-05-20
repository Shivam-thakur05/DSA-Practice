#include<iostream>
using namespace std;
int main()
{
    int number,r,sum=0,p;
    cout<<"enter the number:"<<endl;
    cin>>number;
    p=number;
    while(number>0)
    {
        r=number%10;
        sum=sum+(r*r*r);
        number=number/10;
    }
    if(p==sum)
    {
        cout<<"armstrong number";
    }
    else{
        cout<<"not atrmstrong number";
    }
    return 0;
}