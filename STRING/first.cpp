#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//finding the length of string
int getlength(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}

//reverse a string
int reverse_string(char ch[],int n){
    int s=0;
    int e=n-1;
    // for(int i=e;i>=s;i--){
    //     cout<<ch[i];}
    while(s<e){
        swap(ch[s++],ch[e--]);
    }
}
char tolowercase(char ch){
    if(ch>='A'&&ch<='Z'){
       char temp=ch-'A'+'a'; 
       return temp;
    }
    else{
        return ch;
    }
    
}

//check palindrome without case sensitive
bool checkpalindrome(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(tolowercase(ch[s])!=tolowercase(ch[e])){return 0;}
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char ch[20];
    cout<<"enter your name  : ";
    cin>>ch;
    cout<<"your name is : "<<ch;
    cout<<"\nyour name contain elements : "<<getlength(ch);
    int len=getlength(ch);
    cout<<endl;
    reverse_string(ch,len);
    cout<<"your name is : "<<ch<<endl;
    cout<<"palindrome or not : "<<checkpalindrome(ch,len);

    return 0;
}