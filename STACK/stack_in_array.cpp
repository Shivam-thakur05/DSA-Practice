#include<iostream>
using namespace std;

int stack[100], n = 100;
int top = -1;

void push(int val){
    if(top >= n-1){
        cout<<"stack is overflow !"<<endl;
        return;
    }
    else{
        top++;
        stack[top] = val;
    }
}

void pop(int val){
    if(top < -1){
        cout<<"stack is underflow !"<<endl;
    }
    else{
        cout<<"the element poped form the stack : "<<stack[top]<<endl;
        top--;
    }
}

void display(){
   if(top >= 0){
    cout<<"stack elments are ";
    for(int i = top; i >= 0; i--){
        cout<<stack[i]<<" ";
    }
   }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    display();
    return 0;
}