#include<iostream>
using namespace std;

void reverse(char name[],int n){
int start=0,end=n-1;
while(start<=end){
    swap(name[start],name[end]);
    start++;
    end--;
}
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
    cout<<"enter any string : ";
    cin>>ch;

    cout<<"you have enter : "<<ch;

    int l=getlength(ch);
    cout<<"length of array is : "<<getlength(ch)<<endl;

    reverse(ch,l);
    cout<<"your reverse sring is : "<<ch;
    return 0;
}