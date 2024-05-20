#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<deque>
#include<map>
using namespace std;

int main()
{
    // stl array


    // array<int,4> a={1,2,3,4};
    // int size=a.size();

    // for (int i = 0; i < size; i++)
    // {
    //    cout<<a[i]<<" ";
    // }
    // cout<<"element at 2nd index -> "<<a.at(2)<<endl;
    // cout<<"empty or not ! "<<a.empty()<<endl;
    // cout<<"first element : "<<a.front()<<endl;
    // cout<<"last element is : "<<a.back();
    // return 0;

// stl vector concept

//     vector<int> v;
//     vector<int> a(5,2);
//     cout<<"print a : ";
//     for (int i : a)
//     {
//       cout<<i<<" ";
//     }

//     vector<int> last(a);
//     cout<<"print b : ";
//     for (int i : a)
//     {
//       cout<<i<<" ";
//     }

//     cout<<"capacity is : "<<v.capacity()<<endl;
//     v.push_back(1);
//     cout<<"capacity is : "<<v.capacity()<<endl;
//      v.push_back(2);
//     cout<<"capacity is : "<<v.capacity()<<endl;
//      v.push_back(3);
//     cout<<"capacity is : "<<v.capacity()<<endl;
//     cout<<"size of vector is : "<<v.size()<<endl;

//     cout<<"before pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     v.pop_back();

//    cout<<"after pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"new capacity of vector is : "<<v.capacity();

//     cout<<"before clear size is : "<<v.size()<<endl;
//     v.clear();
//     cout<<"after clear size is : "<<v.size()<<endl;


// stl deque concept
// deque<int> d;
// d.push_back(1);
// d.push_front(2);

// cout<<endl;
// cout<<"print first index element -> "<<d.at(1)<<endl;
// cout<<"front "<<d.front()<<endl;
// cout<<"back "<<d.back()<<endl;
// cout<<"empty or not : "<<d.empty()<<endl;

// cout<<"before erase : "<<d.size()<<endl;
// d.erase(d.begin()+1);
// //d.erase(d.begin(),d.begin()+1);
// cout<<"after erase : "<<d.size()<<endl;
// for(int i:d)
// {
//     cout<<i<<" ";
// }


//stl map

// map<int,string> m;
// m[1]="Shivam";
// m[12]="Kumar";
// m[3]="Thakur";
// m.insert({5,"bheem"});

// for(auto i:m){
// cout<<i.first<<endl;
// }
// cout<<"finding -13 -> "<<m.count(-13)<<endl;
// cout<<"finding -13 -> "<<m.count(3)<<endl;

// cout<<"before erase : "<<endl;
// for(auto i:m){
// cout<<i.first<<" "<<i.second<<endl;
// }
// //m.erase(12);
// cout<<"after erase : "<<endl;
// for(auto i:m){
// cout<<i.first<<" "<<i.second<<endl;
// }

// auto it=m.find(3);
// for(auto i=it;i!=m.end();i++){
//  cout<<(*i).first<<endl;
// }


//stl algorithm

vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(5);
v.push_back(8);

cout<<"finding 6 -> "<<binary_search(v.begin(),v.end(),6)<<endl;
cout<<"finding 5 -> "<<binary_search(v.begin(),v.end(),5)<<endl;

cout<<"lower bound -> "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
cout<<"upper bound -> "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

int a=4;
int b=9;

cout<<"maximum is : "<<max(a,b)<<endl;
cout<<"minimum is : "<<min(a,b)<<endl;

swap(a,b);
cout<<"after swap "<<"a -> "<<a<<" "<<"b -> "<<b<<endl;

string abcd="shivam";
reverse(abcd.begin(),abcd.end());
cout<<"string -> "<<abcd<<endl;

rotate(v.begin(),v.begin()+1,v.end());
cout<<"after rotate "<<endl;
for(int i:v){
    cout<<i<<" ";
}

}
