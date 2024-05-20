#include<iostream>
using namespace std;
bool reverse(char name[],int n){
int start=0,end=n-1;
while(start<=end){
    if(name[start]==name[end])
    {
    start++;
    end--; 
    }
    else{
        return 0;
    }
}
return 1;
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}


int main()
{
    char ch[20];
    cout<<"enter your string : ";
    cin>>ch;
    cout<<"your orginal string is : "<<ch<<endl;
    int len=getlength(ch);
    cout<<"length is : "<<len<<endl;
    cout<<"palindrome or not! : "<<reverse(ch,len);
    return 0;
}