#include<iostream>
using namespace std;

int main()
{
  int row;
  cout<<"Enter no. of rows: ";
  cin>>row;
  
  int i,j;

  for(i=1;i<=row;i++)
  {
    for(j=1;j<=i;j++)
    cout<<"*";
    for(j=1;j<=2*(row-i);j++)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"*";
    cout<<"\n";
  }
    for(i=row;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    cout<<"*";
    for(j=1;j<=2*(row-i);j++)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"*";
    cout<<"\n";
  }
  return 0;
}