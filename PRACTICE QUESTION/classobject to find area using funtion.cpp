#include<iostream>
using namespace std;
class triangle
{
    public:
    void area(int s1,int s2,int s3)
    {
        double s =(s1+s2+s3)/2.0;
        cout<<"area is :"<<s<<endl;
        cout<<"perimeter is :"<<(s1+s2+s3)<<endl;
    }
};
int main()
{
    triangle t;
    t.area(3,4,5);
    return 0;
}