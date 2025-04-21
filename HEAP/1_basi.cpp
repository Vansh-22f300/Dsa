#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    heap(){
        arr[0]=-1; // 0th index is not used in heap 
        size=0;
    }
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else return;
        }
    }
    void delfromheap(){
        if(size==0){
            cout<<"Nothing to ddlete"<<endl;
            return;
        }
        arr[1]=arr[size]; // last elemet ko first index me rakhdo
        size--;
        int i=1;
        while(i<size){
            int leftindex=2*i;
            int rightindex=2*i+1;
            if(leftindex<size && arr[i]<arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            if(rightindex<size && arr[i]<arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
            else{
                return;
            }
        }
    }
    void heapify(int arr[], int n) {
        for (int i = n / 2; i >= 1; i--) {
            int parent = i;
            while (parent<n) {
                int leftindex = 2 * parent;
                int rightindex = 2 * parent + 1;
                int largest = parent;
    
                if (leftindex <= n && arr[leftindex] > arr[largest]) {
                    largest = leftindex;
                }
                if (rightindex <= n && arr[rightindex] > arr[largest]) {
                    largest = rightindex;
                }
    
                if (largest != parent) {
                    swap(arr[parent], arr[largest]);
                    parent = largest;
                } else {
                    break; // no more percolation needed
                }
            }
        }
    }
    void heapsort(int arr[], int n) {
        heapify(arr, n); // Step 1: Build the heap

        int size = n;
        while (size > 1) {
            swap(arr[1], arr[size]); // Move max to the end
            size--;

            // Inline heapify logic on index 1
            int parent = 1;
            while (parent <= size) {
                int left = 2 * parent;
                int right = 2 * parent + 1;
                int largest = parent;

                if (left <= size && arr[left] > arr[largest]) {
                    largest = left;
                }
                if (right <= size && arr[right] > arr[largest]) {
                    largest = right;
                }

                if (largest != parent) {
                    swap(arr[parent], arr[largest]);
                    parent = largest;
                } 
                else 
                {
                    break;
                }
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};



int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.delfromheap();
    h.print();
    h.delfromheap();
    h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    h.heapify(arr,n);
    cout<<"After heapify"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    h.heapsort(arr,n);
    cout<<"After heapsort"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Priority Queue MAx Heap"<<endl;
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout<<"Top of pq: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Now top of pq"<<pq.top()<<endl;
    cout<<"size of pq"<<pq.size()<<endl;
    if(!pq.empty()){
        cout<<"pq is not empty"<<endl;
    }
    else{
        cout<<"Pq is empty"<<endl;
    }
    cout<<endl;


    cout<<"Priority queue min heap"<<endl;
    priority_queue<int,vector<int>,greater<int>> Minheap;
    Minheap.push(4);
    Minheap.push(2);
    Minheap.push(5);
    Minheap.push(3);
    cout<<"Top of Minheap: "<<Minheap.top()<<endl;
    Minheap.pop();
    cout<<"Now top of Minheap"<<Minheap.top()<<endl;
    cout<<"size of Minheap"<<Minheap.size()<<endl;
    if(!Minheap.empty()){
        cout<<"Minheap is not empty"<<endl;
    }
    else{
        cout<<"Minheap is empty"<<endl;
    }

    return 0;
}