#include<iostream>
using namespace std;

void reachHome(int src,int dest) {
cout<<" source : "<< src <<" destination  : "<<dest <<endl;
if(src == dest)
{
    cout<<endl<<"arrived!";
    return;
}


src++;

//rc
reachHome(src,dest);
}

int main()
{
    int src = 1;
    int destination = 10;
    reachHome(src,destination);
    return 0;
}