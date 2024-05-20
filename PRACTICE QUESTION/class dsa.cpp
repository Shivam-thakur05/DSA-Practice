#include<iostream>
using namespace std;
class fruit
{
public:
string name;
string color;
int price;
};
int main()
{
    fruit apple;
    apple.name="apple";
    apple.color="red";
    apple.price=80;

    cout<<apple.name<<"\t"<<apple.color<<"\t"<<apple.price<<"\n";


    fruit *mango;//=new fruit();
    mango->name="mango";
    mango->color="yellow";
    mango->price=100;
    cout<<mango->name<<" "<<mango->color<<" "<<mango->price;
    return 0;
}