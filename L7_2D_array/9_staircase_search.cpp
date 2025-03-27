#include<iostream>
using namespace std;
void staircasesearch(int a[100][100],int n,int m){
    int key;
    cout<<"Enter the key to be searched:";
    cin>>key;
    bool iskeypresent=false;
    int i=0;
    int j=m-1;
    while(i<n && j>=0){
        if(a[i][j]==key){
            iskeypresent=true;
            break;
        }
        else if(a[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    if(iskeypresent){
        cout<<"Key found at index "<<i<<","<<j<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
}
}
int main(){
    int a[100][100];
    int n,m;//n=rows,m=columns
    cin>>n>>m;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=num;
            num++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 
    staircasesearch(a,n,m);
    
     
    return 0;
} 


