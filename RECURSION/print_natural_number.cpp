#include<iostream>
using namespace std;

void natural(int n) {
    if(n == 0) {
        return;
    }
    
    natural(n - 1);
    //int largenumber = 1+smallnumber;
    cout<<n<<"\t"; 
    //return largenumber;
}

int main()
{
    
    int n;
    cin>>n;
    natural(n);
    return 0;

}