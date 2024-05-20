#include<iostream>
using namespace std;
int main()
{
    int a[5]={12,13,14,17,5},max=0;
    for(int i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return 0;
}