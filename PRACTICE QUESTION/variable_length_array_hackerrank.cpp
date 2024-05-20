#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //taking numer of array and number of query
    int number_of_array,number_of_query;
    cin>>number_of_array>>number_of_query;
    
    //create a vector that store the value of each array
    vector<vector<int>>array_element;
    
    //creating another vector for storing temprary data
    vector<int>sub_array;
    
    //declare the size of each array and storing the value in original array
    int array_size,array_value;
    for(int i=0;i<number_of_array;i++){
        cin>>array_size;
        sub_array.clear();
        for(int i=0;i<array_size;i++){
            cin>>array_value;
            sub_array.push_back(array_value);
        }
       array_element.push_back(sub_array);
    } 
     
    //
    for(int i=0;i<number_of_query;i++){
        int arr_of_interest,position_of_interest;
        cin>>arr_of_interest>>position_of_interest;
        cout << array_element[arr_of_interest][position_of_interest] << endl;
    }
    return 0;
}
