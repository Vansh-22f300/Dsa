#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n=5;
    int m=5;
    //n=rows,m=columns
    // cin>>n>>m;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>a[i][j];
    //         // num++;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<a[i][j]<<" ";
    //         // num++;
    //     }
    //     cout<<endl;
    // }



    // for(int i=0;i<n;i++){
    //     cout<<i++<<" ";
    //     cout<<endl;
    // }
    int num=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=1;j<=5;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=5;j>=1;j--){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//             // num++;
//         }
//         cout<<endl;
//     }
}