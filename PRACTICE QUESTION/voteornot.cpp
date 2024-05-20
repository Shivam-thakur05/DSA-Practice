#include<iostream>
using namespace std;
void person(int age)
{
    if(age>=18)
    {
        cout<<"they can vote";
    }
    else
    {
        cout<<"they can not vote!";
    }
}
int main()
{
    int age;
    cout<<"enter person age:";
    cin>>age;
    person(age);
    return 0;
}
    