#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int>S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    cout<<S.top()<<" "<<S.top()-1<<endl;
    return 0;
}