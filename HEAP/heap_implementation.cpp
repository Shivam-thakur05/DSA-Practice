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

    //we don't consider the first 0th element 
    while(index>1){
        int parent = index/2;

        if(arr[parent]<arr[index]){         //parent is not greater than child so we swapped
            swap(arr[parent],arr[index]);
            index = parent;
        }
        else{
            return;
        }
    }
}

void deleteFromHeap(){
    if(size == 0){
        cout<<"nothing to delete"<<endl;
        return;
    }
    //put last element into first index, deletion is done here next part is for arranging the value into their correct place
    arr[1] = arr[size];
    //remove last element
    size--;
    //take root node to its correct position
    int root = 1;
    while(root<size){
        int leftChild = 2*root;
        int rightChild = 2*root+1;

        if(leftChild<=size && arr[root]<arr[leftChild]){ // corrected condition
            swap(arr[root],arr[leftChild]);
            root = leftChild;
        }
        else if(rightChild<=size && arr[root]<arr[rightChild]){ // corrected condition
            swap(arr[root],arr[rightChild]);
            root = rightChild;
        }
        else{
            return;
        }
    }
}
void print(){
    for (int i = 1; i <= size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};
    // TC log(n)
void heapify(int arr[],int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<n && arr[largest]<arr[left]){
        largest = left;
    }
    if(left<n && arr[largest]<arr[right]){
        largest = right;
    }
    
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

int main(){
    heap h;
    
    h.insert(5);
    h.insert(3);
    h.insert(8);
    h.insert(2);
    h.insert(3);
   // h.insert(45);
    h.print();
   // h.deleteFromHeap();
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;              //this is the size of array
    for(int i = n/2; i > 0; i--){
        heapify(arr,n,i);           //call the heapify fucntion
    }
    cout<<"printing the array now "<<endl;
    for(int i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}