#include<iostream>
using namespace std;

class Stack{
    public:
    //properties
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

void push(int data){
        if(size - top > 1){
            //cout<<"size is available for insert "<<endl;
            arr[++top] = data;
        }
        else{
            cout<<"stack is overflow "<<endl;
        }
}
void pop(){
    if(top >= 0){
        //cout<<"top element popped successfully! "<<endl;
        top--;
    }
    else{
        cout<<"stack is underflow "<<endl;
    }
}
int peek(){
    if(top >= 0){
        return arr[top];
    }
    else{
        cout<<"stack is empty! "<<endl;
        return -1;
    }
}
void display(){
    while(top >= 0){
        cout<<arr[top]<<" ";
        pop();
    }
}
};

int main()
{
    Stack st(5);
    st.push(15);
    st.push(16);
    st.push(17);
    st.display();
    return 0;
}