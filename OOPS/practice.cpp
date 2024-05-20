
#include<iostream>
using namespace std;
class Student{
     public :
      char name;
      int rollNo;
      Student(){
        cout<<"constructor is called ";
      }
// Student(int num){
//     rollNo = num;
// }

void print(){
    cout << name << " "  <<  rollNo;
}
};

int main() { 
    Student obj;
    obj.name = 'A';
    obj.rollNo = 15;
    obj.print();
    }