//print n number without using loop
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    /* Prints numbers from 1 to n */
    
    void printNos(int N)
    {
        if(N > 0) //The loop runs till N>1
        {
            printNos(N-1); //We keep on recursing till the end as we want to print from 1 to N
            cout << N <<"\n"; //When recursion is done then print N
        }
        return;
    }
};
int main()
{
    int T;
    //cin>>t;

    while(T--)
    {
        int N;
        cin>>N;

        Solution ob;
        ob.printNos(N);
        cout<<endl;
    }
        return 0;
    
}