#include<bits/stdc++.h>
using namespace std;

void print(priority_queue<int,vector<int>,greater<int> >h){
    cout<<"Heap Elements"<<endl;
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    cout<<endl;
}

int main(){
    priority_queue<int,vector<int>,greater<int> >h; // min heap
    int k=3;
    int cs=0;

    while(1){
        int data;
        cin>>data;

        if(data==-1){
            print(h);
        }
        else{
            if(cs==k){
                if(data>h.top()){
                    h.pop();
                    h.push(data);
                }
                else{
                    h.push(data);
                    cs++;
                }
            }
        }
    }
}