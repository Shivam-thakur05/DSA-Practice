#include<iostream>
using namespace std;

struct queue{
    int front,rear,capacity;
    int *Arr;
    queue(int data){
        front=rear=0;
        Arr=new int;
    }
    //function to insert element in  array
    void enqueue(int data){
        if(capacity==rear){
            cout<<"\nqueue is full\n";
            return;
        }
        else{
            Arr[rear]=data;
            rear++;
        }
    }
    //function to dequeue of element
    void dequeue(){
        if(front==rear){
            cout<<"\nqueue is empty\n";
            return;
        }
        // else{
        //     for(int i=0;i<rear-1;i++){
        //         Arr[i]=Arr[i+1];
        //     }
        //     rear--;
        // }
        Arr[front] = Arr[front++];
        
    }
    //print all element present in queue
    void display(){
        if(front==rear){
            cout<<"\nqueue is empty\n";
            return;
        }
        else{ for(int i=front;i<rear;i++){
                cout<<Arr[i]<<" ";
            }
        }   
    }
    void peekelement(){
        cout<<"\npeak element is : "<<Arr[front]<<endl;
    }
};

int main()
{
    queue q(5);
    q.enqueue(2);
    q.enqueue(9);
    q.enqueue(5);
    q.enqueue(7);
    q.display();
    q.dequeue();
    cout<<"\n";
    q.display();
    cout<<"\n";
    q.peekelement();
    return 0;
}