#include <iostream>
using namespace std;

void printFun(int test)
{
    if (test < 1)
        return;
    else {
        cout << "before : "<<test << " ";
        printFun(test - 1); // statement 2
        cout <<endl<<"after : "<< test << " ";
        return;
    }
}
int main()
{
    int test = 3;
    printFun(test);
}
