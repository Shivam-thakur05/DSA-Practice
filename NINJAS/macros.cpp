#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// macro definition

// #define MAX 6
// int main(){
//     for(int i = 0;i<MAX;i++){
//         cout<<i<<" ";
//     }
//     return 0;
// }

//#define LIMIT 5

// int main() {
//     for (int i = 0; i < LIMIT; i++) {
//         cout << i << " ";
//     }
//     return 0;
// }


// macro with parameter
#define Area(l, b)(l * b)

int main() {
    int l = 10, b = 5, a;
    a = Area(l, b);
    cout << "The Area of the rectangle is: " << a;
    return 0;
}
