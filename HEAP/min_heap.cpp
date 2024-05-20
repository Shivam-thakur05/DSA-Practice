#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size = 0;

    heap(){
        arr[0] = -1;
        size = 0;
    }

void insert(int val){
    size = size+1;
    int index = size;
    arr[index] = val;

    //min heap algo
    while(index>1){
        int parent = index/2;

        if(arr[parent]>arr[index]){
            swap(arr[parent],arr[index]);
            index = parent;
        }
        else{
            return;             //if not return then loop will be infinite run
        }
    }
}
void print(){
    if(size == 0){
        cout<<"no element is here!"<<endl;
    }
    for(int i = 1; i <= size; i++){
        cout<<arr[i]<<" ";
    }
}
};

void heapify(int arr[],int size,int i){
    int smallest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<size && arr[smallest]>arr[left]){
        smallest=left;
    }
    if(right<size && arr[smallest]>arr[right]){
        smallest=right;
    }
    if(smallest != i){
        swap(arr[smallest],arr[i]);
        heapify(arr,size,smallest);
    }
}



int main()
{
    heap h;

    h.insert(52);
    h.insert(54);
    h.insert(51);
    h.insert(35);
    h.insert(56);
    h.insert(45);
    h.print();

    int arr[6] = {8,4,9,5,7,6};
    int n = 6;
    for(int i = n/2; i > 0; i--){
        heapify(arr,n,i);
    }
    return 0;
}