#include<iostream>
using namespace std;
void sorting(int arr[],int n)
{
	int start=0;
	int end=n-1;
	while(start<end)
	{
		while(arr[start]==0 && start<end)
		{
			start++;
		}
		while(arr[end]==1 && start<end)
		{
			end--;
		}
		if(start<end)
		{
			swap(arr[start],arr[end]);
			start++;
			end--;
		}
	}	
}
void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}


int main()
{
	int arr[8]={1,0,0,1,0,1,0,1};


	sorting(arr,8);
	printarray(arr,8);
	return 0;
}