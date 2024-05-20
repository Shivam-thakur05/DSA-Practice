#include<iostream>
using namespace std;
class triangle
{
    public:
    int s1,s2,s3;
    triangle(int a,int b,int c)
    {
        s1=a;
        s2=b;
        s3=c;    
    }
    void area()
    {
        float s=(s1+s2+s3)/2.0;
        cout<<"area is :"<<s<<endl;
        cout<<"perimeter is :"<<(s1+s2+s3)<<endl;
    }
};
int main()
{
    triangle t(3,4,5);
    t.area();
    return 0;

}