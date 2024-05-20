#include<iostream>
using namespace std;
class abc
{
    public:
    int length,breadth;
    abc(int l,int b)
    {
        length=l;
        breadth=b;
        // return l*b;
    }
    int rect()
    {
    //     cout<<"enter length and breadth";
    //     cin>>length>>breadth;
    //     int area=length*breadth;
    int area=length*breadth;
      cout<<"area is :"<<area;
         return 0;
        
    }
};
int main()
{
    abc a(2,3);
    a.rect();
    return 0;
}
