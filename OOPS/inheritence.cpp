#include<iostream>
using namespace std;

class hero {
    public:
    int age;
    int height;

    public:
    //getter setter for accessing private data member outside the class
    int getage() {
        return this -> age;
    }

    int setheight(int h){
        this -> height = h;
    }

};
//inheritence
class abc : public hero{
    public:
    string color;

    void sleep() {
        cout<<"male Sleeping " <<endl;
    }

};

int main()
{
    abc obj1;
    cout<< obj1.age << endl;
    cout<< obj1.height << endl;

    cout<< obj1.color << endl;

    obj1.sleep();
    return 0;
}