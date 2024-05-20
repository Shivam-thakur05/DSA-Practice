#include<iostream>
using namespace std;
int sqrtinteger(int n)
{
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        int square=mid*mid;
        if(square==n)
        return mid;

        if(square<n)
       { ans=mid;
        e=mid-1;}

        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


double moreprecision(int n,int precision,int tempsol){
double factor=1;
double ans=tempsol;

for(int i=0;i<precision;i++){
    factor=factor/10;

    for(double j=ans;j*j<n;j=j+factor){
        ans=j;
    }
}
return ans;
}

int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;

int tempsol=sqrtinteger(n);
    cout<<"Answer is : "<<moreprecision(n,3,tempsol);

    return 0;
}