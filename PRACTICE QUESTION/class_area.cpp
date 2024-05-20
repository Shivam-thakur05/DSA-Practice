#include<iostream>
using namespace std;
class abc
{
    public:
    int length,breadth;
    int rect()
    {
        cout<<"enter length and breadth";
        cin>>length>>breadth;
        int area=length*breadth;
        cout<<"area is :"<<area;
        return 0;
    }
};
int main()
{
    abc obj;
    obj.rect();
    return 0;
}