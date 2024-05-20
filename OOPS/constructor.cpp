#include<iostream>
using namespace std;

class hero {
    public:
    int temp = 12;
    int health;
    char level;


    //default constructor
    hero(){
        cout<<"constructor called "<<endl;
    }
    //paramiterised constructor
    hero(int health){
        cout<<"this -> "<<this<<endl;
        this -> health = health;
    }
    //multiple paramiterised contructor
    hero(int health,char level) {
        this -> health = health;
        this -> level = level;
    }
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health = h;
    }
};

int main()
{
    //object created statically
    hero abc(45);
    cout<<"address of ramesh "<<&abc<<endl;
    //dynamically
    hero *h = new hero(45);

    hero temp(24,'R');
    cout<<"hello"<<endl;
    return 0;
}