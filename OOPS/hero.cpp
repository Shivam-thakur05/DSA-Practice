#include<iostream>
#include "first.cpp"
using namespace std;

class abc {
    private:
    int temp = 12;
    int health;
    public:
    char level;
    //private data accessed inside the class
    void display(){
        cout<<"temp value is : "<<temp;
    }

    //for accessing private data in main function we have getter, setter
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health = h;
    }
};

int main()
{
    //static allocation
    abc obj;
    obj.sethealth(50);

    cout<<"health of h1 is : "<<obj.gethealth()<<endl;

    //dynamically allocation just like int* arr = new int[50];
    abc *ans = new abc;
    ans -> sethealth(40);

    cout<<"health is : "<<ans->gethealth()<<endl;
    cout<<"health is : "<<(*ans).gethealth()<<endl;
    return 0;
}