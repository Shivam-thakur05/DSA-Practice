#include<iostream>
using namespace std;

void fun(int arr[]) {
    cout<<"ans : "<<arr[0]<<" ";
}

void increment(int **p) {
    ++(**p);
}

int main()
{
    /* int arr[] = {11,12,13,14};
    fun(arr+1);
    cout<<"fltu : "<<arr[0]<<endl;
    return 0; */

   /* int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout<<first<<" "<<second<<endl; */ 

   /* int first = 100;
     int *p = &first;
     int **q = &p;
     int second = ++(**q);
     int *r = *q;
     ++(*r);
     cout<<first<<" "<<second<<endl; */  

   /* int num = 100;
    int *ptr = &num;
    increment(&ptr);
    cout<<num<<endl; */ 

    int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';
    int * p1, * p2;
    char * p3;

    p1 = & firstvalue;       // p1 = address of firstvalue
    p2 = & secondvalue;      // p2 = address of secondvalue 
    p3 = & thirdvalue;       // p3 = address of thirdvalue
    * p1 = 10;               // value pointed to by p1 = 10
    * p2 = * p1;             // value pointed to by p2 = value pointed to by p1
    p1 = p2;                 // address of secondvalue is assign in firstvalue 
    * p1 = 20;               // value pointed to by p1 = 20
    * p3 = 'b';              // value pointed to by p3 = ‘b ’


    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;
    
    return 0;

}
    