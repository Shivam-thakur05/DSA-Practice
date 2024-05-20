#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool isValidParenthesis(string s)
{
    //create a stack and store the open parenthesis 
    stack<char> temp;
    
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];

        //if ch is opening bracket then store in the stack
        if(ch == '(' || ch == '{' || ch == '['){
            temp.push(ch);
        }
        //else check the top parenthesis and pop
        else{
            //if temp is empty means not any opening ch is here then return false 
            if(temp.empty()){
                return false;
            }
            else {
                char top = temp.top();
                if ((top == '(' && ch == ')') || (top == '{' && ch == '}') ||
                    (top == '[' && ch == ']')) {
                        temp.pop();
                }
                else{
                    return false;
                }
            }
        }
    }
    if(temp.empty()){
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    string s;
    cout<<"enter the string : ";
    cin>>s;

    cout<<isValidParenthesis(s);

    return 0;
}