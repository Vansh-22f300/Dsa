#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

//q1                            //star equal to row wala
    for(int i=1;i<=n;i++){
        //start
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
//q2                                //star equal to column
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
        cout<<" ";
        }
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
//q3                   value triangle
    int value=1;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }

cout<<endl;

    //q4                                nice ques******
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;    
}

//q5            boundary of sqaure
for(int i=1;i<=n;i++){
    //row 1 and row last
    if(i==1 || i==n){
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    // cout<endl;

    //bachii hui rows beech wali
    else
    {
        for(int j=1;j<=n;j++){
            if(j==1 || j==n){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }

}

//q6        rhombus

for(int i=1;i<=n;i++){
    //space1
    if(i==1){                               //first line
        for(int j=1;j<=n-1;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    else if(i==n){              //last line
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        for(int j=1;j<=n-1;j++){
            cout<<" "<<" ";
        }
        cout<<endl;
    }
    else{                               //beech wali bachi hui rows
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        cout<<"*"<<" ";
        for(int j=1;j<=n-2;j++){
            cout<<" "<<" ";
            
        }
        cout<<"*"<<" ";
        for(int j=1;j<i;j++){
            cout<<" "<<" ";
        }
        cout<<endl;
        
    }
    //star
}
cout<<endl;
//q7 swastik pattern
for(int i=1;i<=n;i++){
    if(i==(n/2)+1){
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    else if(i==1){
        cout<<"*"<<" ";
        for(int j=1;j<=(n/2)-1;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=(n/2)+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    else if(i==n){
        for(int j=1;j<=(n/2)+1;j++){
            cout<<"*"<<" ";
        }
        for(int j=1;j<=(n/2)-1;j++){
            cout<<" "<<" ";

        }
        cout<<"*"<<" ";
    }
    else if(i<=(n/2)&& i!=1){
        cout<<"*"<<" ";
        for(int j=1;j<=(n/2)-1;j++){
            cout<<" "<<" ";
        }
        cout<<"*"<<" ";
        for(int j=1;j<=(n/2)-1;j++){
            cout<<" "<<" ";
        }
        cout<<endl;
    }
    else if(i>(n/2)+1&& i!=n){
        for(int j=1;j<=(n/2);j++){
            cout<<" "<<" ";
        }
        cout<<"*"<<" ";
        for(int j=1;j<=(n/2)-1;j++){
            cout<<" "<<" ";
        }
        cout<<"*"<<" ";
        
        cout<<endl;
    }
    }
    

    }           