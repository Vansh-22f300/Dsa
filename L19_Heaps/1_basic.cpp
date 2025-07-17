#include<bits/stdc++.h>
using namespace std;

class Minheap{
    vector<int> v;
    // 0th index is not used
    void heapify(int i){
        int left=2*i;
        int right=2*i+1;

        int mi=i;

        if(left<v.size() && v[left]<v[mi]){
            mi=left;
        }
        if(right<v.size() && v[right]<v[mi]){
            mi=right;
        }
        if(mi!=i){
            swap(v[i],v[mi]);
            heapify(mi);
        }
    }
    public:

    Minheap(){
        v.push_back(-1); // 0th index is not used
    }
    void push(int d){
        v.push_back(d);
        int c=v.size()-1;
        int p=c/2;
        while(p>0 && v[p]>v[c]){
            swap(v[p],v[c]);
            c=p;
            p=c/2;
        }
    }
    void pop(){
        swap(v[1],v[v.size()-1]);
        v.pop_back();
        heapify(1); 
    }
    bool empty(){
        return v.size()==1;
    }
    int top(){
        return v[1];
    }

};
int main(){
    Minheap h;
    h.push(5);
    h.push(3);
    h.push(2);
    h.push(4);
    h.push(1);
    h.pop();
    if(h.empty()){
        cout<<"Heap is empty"<<endl;
    }
    else{
        cout<<"Heap is not empty"<<endl;
    }
    cout<<"Heap elements: ";
    
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    cout<<endl;
    return 0;
}