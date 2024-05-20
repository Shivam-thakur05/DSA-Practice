#include<iostream>
using namespace std;
int main()
{
	int n,a,m,sum=0,rev=0,rev_of_sum=0;
	cout<<"enter  number:";
	cin>>n;
	a=n;
	//find sum of digit
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		rev=rev*10+m;
		n=n/10;
	}
	cout<<"sum is:"<<sum<<endl;
	int sum1=sum;
	//cout<<"reverse of number is:"<<rev<<endl;


	while(sum>0)
	{
		int mod=sum%10;
		rev_of_sum=rev_of_sum*10+mod;
		sum=sum/10;
	}
	cout<<"reverse of sum is:"<<rev_of_sum<<endl;
	if(sum1==rev_of_sum)
{	cout<<"sum of digit is palidrom";
	return 1;}
	
	else
{	cout<<"sum of difit is not palindrom:";
return 0;}
	return 0;
}
