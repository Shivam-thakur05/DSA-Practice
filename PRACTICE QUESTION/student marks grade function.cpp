#include<iostream>
using namespace std;
void marks_(int marks)
{
    if(marks>=90&&marks<=100)
    {
        cout<<"AA";
    }
    else if(marks>=81&&marks<90)
    {
        cout<<"AB";
    }
    else if(marks>=71&&marks<81)
    {
        cout<<"BB";
    }
    else if(marks>=61&&marks<71)
    {
        cout<<"BC";
    }
    else if(marks>=51&&marks<61)
    {
        cout<<"CD";
    }
    else if(marks>=41&&marks<51)
    {
        cout<<"DD";
    }
    else{
        cout<<"fail";
    }
}
int main()
{
    int marks;
    cout<<"enter student marks:";
    cin>>marks;
    marks_(marks);
    return 0;
}
    