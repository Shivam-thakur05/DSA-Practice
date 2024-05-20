#include<iostream>
using namespace std;

bool checkPalindrome(string str) {
    int s = 0;
    int e = str.length()-1;

    while(s <= e){
        if(str[s]!=str[e])
        return false;
        else{
            s++;
            e--;
        }
    }
    return true;
}


int main()
{
    string name = "shivam";
    
    return 0;
}